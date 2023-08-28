/* Olivia Knight
* CSCI 4547
* Sniff Program, FileID Class
* The FileID class will hold information about a file.
*/
#pragma once
#include "tools.hpp"
#include <dirent.h>
#include <vector>
#include <algorithm>
class FileID
{
private:
	string filename;
	int iNode;
	string pathname;
	//string file_type;
	vector<string> sniff_words; //Will store the sniff words found in the file. 
public:
	FileID(string name,string path, int inode);
	void print(ostream& out); //Print the iNode number and path to the output stream.
	void insertsniff(string word);// insert a sniff-word into the vector when it is found.
	int getvectorcount() { return sniff_words.size(); }
	~FileID();
};

