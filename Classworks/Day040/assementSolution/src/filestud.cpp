#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

	ifstream rfile("e.txt");

	string line;

	if (rfile.is_open()) {
		getline(rfile, line);
		rfile.close();

		//mul 3*8

		if (line.substr(0,3)=="mul") {

			size_t spacpoc = line.find(" ");
			size_t starpoc = line.find("*");

			string nstr1 = line.substr(spacpoc+1,starpoc-spacpoc-1);
			string nstr2 = line.substr(starpoc+1);

			int num1 = stoi(nstr1);
			int num2 = stoi(nstr2);

			int res = num1 * num2;

			cout << "Multiplication: " << res << endl;

		}
	}


}