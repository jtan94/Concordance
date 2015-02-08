#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "concordance.h"

using namespace std;

int main(int argc, char* argv[])
{
	Concordance myconcordance;

	ifstream infile;
	infile.open(argv[1]);

	int linenumber = 0;
	string aline;
	while (getline(infile, aline))
	{
		istringstream theline(aline);
		linenumber++;

		string aword;
		while (theline>>aword)
		{
			myconcordance.addWord(aword, linenumber);
		}
	}

	myconcordance.selectionsort();
	cout<<myconcordance;

	return 0;
}
