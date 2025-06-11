#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main() {
	ifstream rfile("a.txt");

	string line;

	//add 2,3

	if (rfile.is_open()) {
		while (getline(rfile, line)) {


			if (line.substr(0, 3) == "add") {
				size_t spacpos = line.find(" ");
				size_t compos = line.find(",");

				string nstr1 = line.substr(spacpos + 1, compos - 1);
				string nstr2 = line.substr(compos + 1);

				int a = stoi(nstr1);
				int b = stoi(nstr2);

				int res = a + b;
				cout << "ADDITION: " << res << endl;

			}


			else if (line.substr(0, 3) == "sub") {
				size_t spacpos = line.find(" ");
				size_t compos = line.find(",");
				//sub 4,2

				string nstr1 = line.substr(spacpos + 1, compos - 1);
				string nstr2 = line.substr(compos + 1);

				int a = stoi(nstr1);
				int b = stoi(nstr2);

				int res = a - b;

				cout << "Substraction: " << res << endl;
			}
			else {
				cout << "Error!!!" << endl;
			}
		}
	}

	rfile.close();
	
}