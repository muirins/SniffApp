#pragma once
#include "Params.hpp"
#include "FileID.hpp"
#include <sys/stat.h>
#include <sys/types.h>
#include <sstream>
#include <algorithm>
#include <cctype>

class Sniff
{
private:
	Params *param_inst;
	string directoryname; //The simple name of the first directory to be searched
	ofstream myOut; //account for output switch
	//The pathname of the directory to be searched, initially the same as the directory from Params.
	string pathname;
	vector<string> words; //for unpacking the list of sniff-words.
	vector<FileID> susfiles; // for the suspicious files found in the current directory.
	DIR* dir;
	struct dirent* dir_entry; //to hold the current directory entry
	struct stat tempStat; //using to get the entry information. 
	bool foundterm = false;
public:
	Sniff(Params *paraminst); //must use a param object as the argument
	void oneDir();
	FileID * oneFile(string filename, int inodenum, string patname);
	~Sniff();
};
