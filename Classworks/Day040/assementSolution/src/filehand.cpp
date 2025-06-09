#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main() {
	ifstream refile("e.txt");

	string line;

	if (refile.is_open()) {
		getline(refile, line);
		refile.close();
		
		if (line.substr(0,3)=="add") {
			size_t spacepos = line.find(" ");
			size_t compos = line.find(",");
			
			string n_str1 = line.substr(spacepos + 1, compos - spacepos - 1);
			string n_str2 = line.substr(compos+1);

			int num1 = stoi(n_str1);
			int num2 = stoi(n_str2);

			int res = num1 + num2;

			cout << "Result : " << res << endl;
		}
		else {
			cout << "Invalid " << endl;
		}
	}
	else {
		cout << "File Not Opening" << endl;
	}



}