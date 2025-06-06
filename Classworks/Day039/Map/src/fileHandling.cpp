#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

	ofstream outFile("ebi.txt");

	if (outFile.is_open()) {
		outFile << "HEllo Jesus" << endl;
		outFile << "I M trapped!!" << endl;
		outFile.close();
		cout << "write message in txt file Successfully!!" << endl;
	}
	else {
		cout << "File is not opening" << endl;
	}

	ifstream rFile("ebi.txt");

	string line;

	if (rFile.is_open()) {
		/*getline(rFile, line, );
		cout << line << endl;*/
		while (getline(rFile, line)) {
			cout << line << endl;
		}
		rFile.close();
	}
	else {
		cout << "File not Openning" << endl;
	}

}