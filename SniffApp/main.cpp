// Olivia Knight
// CSCI 4547
// Sniff Program: Main file.
//

#include "Params.hpp"
#include "tools.hpp"
#include "Sniff.hpp"
using namespace std;

int main(int argc, char* argv[])
{
	//Call banner() (tools library). Print a welcome message on the screen. 
	banner();
	Params param1(argc, argv);
	param1.print();
	//Declare an instance of the Sniff class and pass the Params object to the constructor.
	Sniff sniff_example(&param1);
	//Execute a chdir() into the starting directory named in Params. 
	chdir(param1.getPathname());
	//Call Sniff::oneDir() to process that directory.
	sniff_example.oneDir();
	//Call bye() from the tools library.
	bye();
}
