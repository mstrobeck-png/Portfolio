#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream outFile = ofstream("pe16.txt");
	if (outFile.is_open())
	{
		outFile << "This is PE16" << endl;
		outFile << "File IO" << endl;
	}
	outFile.close();


	//binary
	ifstream binar = ifstream("pe16.txt", ios::binary);
	string line;
	while (binar.good()) {
		getline(binar, line);
	}
	binar.close();


	//array
	ifstream inFile("pe16.txt");
	string PE = string(istreambuf_iterator<char>(inFile), istreambuf_iterator<char>());
	for (int i = 0, length = PE.length(); i < length; i++) {
		PE[i];
	}
	outFile.close();


	//output to console
	cout << PE << endl;

}


