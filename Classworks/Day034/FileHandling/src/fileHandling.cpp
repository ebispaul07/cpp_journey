#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main() {

	ofstream fOut("ebi.txt");

	////Writing..a file
	//int num=2;
	////
	//for (int i = 1;i <= 10;i++) {
	//fOut << i<<" X "<<2<<" = " << i * num << endl;
	//}
	//fOut.close();

	////reading a..file

	string line;

	ifstream fin("emp.txt.txt");
	if (!fin.is_open()) {
		cerr << "Error:opening the File" << endl;
	}
	getline(fin, line,'&');
	cout << line << endl;
	/*while (getline(fin, line,'&')) {
		cout << line << endl;
	}*/
	fin.close();







}