#include "Sniff.hpp"
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR) // directory
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG) // regular file
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK) // symbolic link

Sniff::Sniff(Params *paraminst)
{
	//Initialize the filename, pathname, and the vector of sniff-words at this time.
		// get filename from FileID??
	param_inst = paraminst;
	pathname = string(paraminst -> getPathname());
	//Wrap an istringstream around the arg string.
	istringstream instr(paraminst-> getSearchWords());

	//read the individual words from the string and store them in the vector.
	string vectorplace = ""; //this is needed as an intermediary from stream to vector
	for (;;) {
		instr >> vectorplace;
		//cout << vectorplace << endl;
		words.push_back(vectorplace);
		if (instr.eof()) break;
	}
	if(param_inst->getoutputswitch() == true){ //open up the output file if specified.
	myOut.open(string(param_inst->getoutputfile()),ios::out | ios::app);

	}

}

void Sniff::oneDir()
{
	//Open the current working directory
	dir = opendir(param_inst->getPathname());
	//print the relative path name of the cwd.
	cout << "Current Working Directory: " <<getcwd(NULL, 0) << endl;
	//Read and discard the first two directory entries 
	dir_entry = readdir(dir);
	dir_entry = readdir(dir);
	//Enter a loop that will read the rest of the entries using readdir().

	for (;;) {
		dir_entry = readdir(dir);
		if (dir_entry == nullptr) {break;}
		stat(dir_entry->d_name, &tempStat);
		//discard soft links, pipes, sockets, and devices TODO

		if (S_ISDIR(tempStat.st_mode) || S_ISREG(tempStat.st_mode)) {
			//If the verbatim switch is on, output the name.
			if (param_inst->getverbose() == true) {
				if(param_inst->getoutputswitch()==true){
					myOut <<"Current Directory / File: " << dir_entry->d_name << endl;
				}
				else{
				cout << "Current Directory / File: " << dir_entry->d_name << endl;}
			}

			if (S_ISDIR(tempStat.st_mode) == true) {
				//do nothing more for now
			}
			if (S_ISREG(tempStat.st_mode) == true) {
				// If the entry is a regular file, process it by calling oneFile()
				FileID *fileinfo;
				fileinfo = oneFile(string(dir_entry -> d_name),dir_entry ->d_ino,pathname);
				/*Store the FileID object that is returned in the vector of files, if and only if at least one
				sniff word was found in that file.*/
				//cout << fileinfo->getvectorcount() << endl;
				if (fileinfo->getvectorcount() != 0) {
					susfiles.push_back(*fileinfo);
					foundterm = true;
				}
				//If no sniff - words are found, discard the FileID.
				else { fileinfo->~FileID(); }
			}
			
		}
	}
	if(foundterm == true){
		if(param_inst->getoutputswitch()==true){
				myOut<<"****************************"<<endl;
				myOut << "Sniff terms were found in the following file(s):" << endl;}
		else{
			cout<<"****************************"<<endl;
			cout << "Sniff terms were found in the following file(s):" << endl;}
		for(int i= 0; i < susfiles.size();i++){

			if(param_inst->getoutputswitch()==true){
				susfiles[i].print(myOut);
			}
			else{

			susfiles[i].print(cout);}
		}
	}
	else{
		if(param_inst->getoutputswitch()==true){
			myOut << "***************************"<<endl;
			myOut<<"No sniff terms were found."<<endl;
		}
		else{
			cout << "***************************"<<endl;
			cout<<"No sniff terms were found."<<endl;
		}
	}
	cout<< "Completed directory processing."<<endl;
	if(param_inst->getoutputswitch()==true){
		myOut << "END OF SEARCH" <<endl;
		myOut.close();
	}
	closedir(dir); //close directory stream once done. 

}

FileID* Sniff::oneFile(string filename, int inodenum, string patname)
{
	//Create and initialize a local FileID object.
	FileID* sniffsearch;
	sniffsearch= new FileID(filename,patname,inodenum);
	//Open a stream to read the file.
	ifstream checkfile(filename);
	string foundword;

	while (!checkfile.eof()) {
		checkfile >> foundword; //take in a word

		//remove any non-alphabetical element in the word.
		foundword.erase(remove_if(foundword.begin(), foundword.end(), [](unsigned char i) {return isdigit(i); }), foundword.end());
		foundword.erase(remove_if(foundword.begin(), foundword.end(), [](unsigned char i) {return ispunct(i); }), foundword.end());
		//take the found word and compare it to the sniff words. 
		//take into account if the user has case insensitive
		if (param_inst->getcasesense() == true) {
			for (int i = 0; i < foundword.length(); i++) {
				foundword[i] = tolower(foundword[i]);
			}
		}
		auto wordfound = find(begin(words), end(words), foundword); //looks through the sniff list and sees if the word matches.
		if (wordfound != end(words)) { //this means the word pulled is a sniff word.
			// store it in the vector that is inside the FileID object. 
			//cout<<"WORD FOUND" << endl;
			sniffsearch->insertsniff(foundword);
		}
	}

	checkfile.close(); // close file once while loop is exited. 
	//File checking done, return fileid object

	return sniffsearch;
	
}

Sniff::~Sniff()
{
	susfiles.clear();
	words.clear();
}


