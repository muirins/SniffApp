/*
* Olivia Knight 
* CSCI 4547
* Program 2: Sniff
* Params class header
*/
#pragma once
#include "tools.hpp"
#include <dirent.h>
#include <getopt.h>
#include <cctype>

using namespace std;

class Params {
private:
	char* sd_pathname = nullptr;//The pathname of the starting directory, a C-style string
	const char* outputname = nullptr; //The name of an output file
	ofstream myOut;//An ofstream for your output file
	//Boolean variables for all the switches. 
	bool caseswitch = false;
	bool rootswitch = false;
	bool outputswitch= false;
	bool verboseswitch = false;
	bool helpswitch = false;
	//argv gives you a c-string containing the words. You need to convert that to a C++ string
	string searchwords;
public:
	Params(int argc, char* argv[]); //The Params constructor, with two parameters: argc and argv
	void print();
	void usage(); 
	void shortswitchhandler(char swtch, char* argument);
	void longswitchhandler(const char* swtch, char* argument);
	char* getPathname() { return  sd_pathname; }
	string getSearchWords() { return searchwords; }
	bool getcasesense() { return caseswitch; }
	bool getverbose() { return verboseswitch; }
	bool getoutputswitch(){return outputswitch;}
	const char* getoutputfile(){return outputname;}
	//~Params();
};
