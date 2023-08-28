#include "Params.hpp"
#include <dirent.h>

Params::Params(int argc, char* argv[])
{
	//Process the command-line arguments using getopt_long() and initialize 
	//the data members to the settings that you
	//find on the command line.Open any files.
	struct option longswitch[]={
		//name, argument type, null, short switch vers or 0
		// 
		//search start switch
		{"root", required_argument,NULL,'r'},
		//verbose switch
		{"verbose",no_argument,NULL,'v'},
		//help switch
		{"help",no_argument,NULL,0},
		{NULL, 0,NULL,0}
	};

	int codeP, switchop, optx;
	string switchesdebug; //this is for debugging to check what switches were caught. 
	for (;;) {
		switchop = getopt_long(argc, argv, "r:o:cv", longswitch, &codeP); //analyzes the command line to find switches
		switchesdebug = to_string(switchop); //debugging
		if (switchop == -1) break; 
		switch (switchop) {
		case 'c': //short switches without arguments. 
		case 'v': {shortswitchhandler(switchop, NULL); break; }

		case 'r':
		case 'o': { //For shortswitches with arguments
			shortswitchhandler(switchop, optarg);
			break; }

		case 0: { //Case for long switches. 
			longswitchhandler(longswitch[codeP].name, optarg);
			break; }
		case '?': //Invalid switches
		default: {usage(); break; }
		}

	}
	for (optx = optind; optx < argc; ++optx) {
		
		searchwords = string(argv[optx]); //The final parts of the command should be the search terms, so we store them here. 
	}
	
}

void Params::print()
{
	//Take all the values that has come and print it to the console or the output file
	/*TODO: Place a switch for -i, input file.*/
	if (helpswitch == true) {
		cout << "\n" << endl;
		cout << "sniff is a command that searches the disk for files that contain one or more specified words." << endl;
		cout << "Valid options: " << endl;
		cout << "   -c\n     *Mark search term(s) as case insensitive, Case Sensitive at default." << endl;
		cout << "   -o [filename]\n     *Select a file to store command results from." << endl;
		cout << "   -v or --verbose\n     *Print the name of every file and directory that is opened." << endl;
		cout << "   -r [pathname] or --root=[pathname]\n     *Choose a directory to start the search at. Current working directory by default." << endl;
	}
	//if an output file was specified, follow the printing there.
	if (outputswitch == true) {
		cout << "\nInformation has been sent to " << string(outputname) << endl;
		myOut << "--------------------------------------" << endl;
		myOut << "Start At: ";
		if(rootswitch == false) {
			 sd_pathname = getcwd(NULL, 0);
			 myOut << getcwd(NULL,0) << endl;

		}

		else{
			myOut << string(sd_pathname) << endl;
		}

		myOut << "Output File: " << string(outputname) << endl;
		myOut << "Verbose? " << ((verboseswitch == true) ? "Yes" : "No") << endl;
		myOut << "Case Sensitive? " << ((caseswitch == true) ? "No" : "Yes") << endl;
		myOut << "Search Terms: " << searchwords << endl;
		myOut.close();
		

	}
	else //No output file, display on standard output stream.
	{

		cout << "--------------------------------------" << endl;
		cout << "Start At: ";
		if(rootswitch == false) {
			sd_pathname = getcwd(NULL, 0); //saving the pathname for future use in Sniff.
			cout << getcwd(NULL, 0) << endl;

			cout << sd_pathname << endl;}
		else{
			cout << string(sd_pathname) << endl;
			cout << getcwd(NULL, 0);
		}
		cout << "Output File: None" << endl;
		cout << "Verbose? " << ((verboseswitch == true) ? "Yes" : "No") << endl;
		cout << "Case Sensitive? " << ((caseswitch == true) ? "No" : "Yes") << endl;
		cout << "Search Terms: " << searchwords << endl;
	}
}

void Params::usage()
{
	//Explains the valid switches. 
	cout << "Usage \n Valid Switches: \n [-cv][--verbose][--help] \n" << endl;
	cout << "\t\t[-o filename] [-r pathname] [--root pathname] \n" << endl;

}


void Params::shortswitchhandler(char swtch, char* argument )
{
	switch (swtch) {
		case 'o':
		{ //Output switch. Will open the specified output file argument. 
			outputswitch = true;
			outputname = argument;
			myOut.open(string(outputname), ios::out | ios::app);
			break;
		}
		case 'r': 
		{// Changing the start directory.
			rootswitch = true;
			sd_pathname = argument;
			//chdir(sd_pathname); //Change the directory to the specified argument //maybe not do it here. 
			break;
		}
		case 'v':
		{ //Set Verbose bool to true.
			verboseswitch = true;
			break;
		}
		case 'c':
		{ //Case insensitive switch
			caseswitch = true;
			for (int i = 0; i < searchwords.length(); i++) { //put them all in lowercase since case cant matter.
				searchwords[i] = tolower(searchwords[i]);
			}
			cout << searchwords << endl;
			break;
		}

	}
}

void Params::longswitchhandler(const char* swtch, char* argument)
{
	if (strcmp(swtch,"verbose")== 0)
	{ verboseswitch = true; }
	if (strcmp(swtch,"root")== 0) {
		rootswitch = true;
		sd_pathname = argument;
		//chdir(sd_pathname); //Change the directory to the specified argument
	}
	if (strcmp(swtch,"help")== 0)
	{ helpswitch = true; }
}



