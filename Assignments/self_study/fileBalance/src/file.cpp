#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	ifstream wrfile("f.txt");

	string line;

	if (wrfile.is_open()) {
		while (getline(wrfile, line)) {

			size_t spacpos = line.find(" ");
			size_t compos = line.find(",");

			string command = line.substr(0, spacpos);
			string nstr1 = line.substr(spacpos + 1, compos - 1);
			string nstr2 = line.substr(compos + 1);

			int a = stoi(nstr1);
			int b = stoi(nstr2);


			if (command == "add") {
				cout << "ADDITION:" << a + b << endl;
			}
			else if (command == "sub") {
				cout << "SUBSTRACTION: " << a - b << endl;
			}
			else if (command == "mul") {
				cout << "MULTIPLICATION: " << a * b << endl;
			}
			else if (command == "div") {
				cout << "DIVISION: " << a / b << endl;
			}


		}
	}

	wrfile.close();

}