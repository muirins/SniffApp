/* Olivia Knight
* CSCI 4547
* Sniff Program, FileID implementation file. 
*/

#include "FileID.hpp"

FileID::FileID(string name, string path, int inode)
{
	filename = name;
	iNode = inode;
	pathname = path.append("/" + name);

}

void FileID::print(ostream& out)
{
	out << "iNode: " << iNode << "\n" << "Path: " << pathname << endl;
	out << "---------------------------------------------" << endl;
}

void FileID::insertsniff(string word)
{
	//Checks the vector to see if the word has not been placed in the sniff vector.
	if(sniff_words.size()==0){
		//this is the first sniff word to be found, so it should be always entered.
		sniff_words.push_back(word);
	}
	for(int i = 0; i < sniff_words.size() && sniff_words.size() != 0; i++){
		if(sniff_words[i] == word){
			break;
		}
		else{
			sniff_words.push_back(word);
		}
	}
}

FileID::~FileID()
{
	sniff_words.clear();
}
