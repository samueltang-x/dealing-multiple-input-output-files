// dealing-multiple-input-output-files.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::cerr;
using std::ifstream;
using std::string;

int main(int argc, char **argv)
{
	int fail_count = 0;
	for (int i = 1; i < argc; ++i) {
		ifstream in(argv[i]);

		cout << "trying to read file " << argv[i] << endl;

		if (in) {
			string s;
			while (getline(in, s))
				cout << s << endl;
		}
		else {
			cerr << "cannot open file " << argv[i] << endl;
			++fail_count;
		}
	}

	return fail_count;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
