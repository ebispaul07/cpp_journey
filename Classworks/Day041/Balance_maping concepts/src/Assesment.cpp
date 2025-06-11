#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main() {
	ifstream rfile("a.txt");

	string line;

	if (rfile.is_open()) {
		while (getline(rfile, line)) {

			//MOV [3],12

			if (line.substr(0, 3) == "MOV") {
				size_t spacpos = line.find(" ");
				size_t brackt1pos = line.find("[");
				size_t brackt2pos = line.find("]");
				size_t compos = line.find(",");


				string nstr1 = line.substr(brackt1pos + 1, brackt2pos - 1);
				string nstr2 = line.substr(compos + 1);

				int a = stoi(nstr1);
				int b = stoi(nstr2);

				cout << b << endl;

			}else if (line.substr(0, 3) == "MOV") {
				size_t spacpos = line.find(" ");
				size_t brackt1pos = line.find("[");
				size_t brackt2pos = line.find("]");
				size_t compos = line.find(",");


				string nstr1 = line.substr(brackt1pos + 1, brackt2pos - 1);
				string nstr2 = line.substr(compos + 1);

				int a = stoi(nstr1);
				int b = stoi(nstr2);

				cout << b << endl;

			}else if (line.substr(0, 3) == "MOV") {
				size_t spacpos = line.find(" ");
				size_t brackt1pos = line.find("[");
				size_t brackt2pos = line.find("]");
				size_t compos = line.find(",");

				
				string nstr1 = line.substr(brackt1pos + 1, brackt2pos - 1);
				string nstr2 = line.substr(compos + 1);

				int a = stoi(nstr1);
				int b = stoi(nstr2);

				cout << b<<endl;

				//MOV CX,0

			}
			else if (line.substr(0, 3) == "MOV" && line.substr(4, 5) == "CX") {
				size_t
			}
		}
	}
	else {
		cout << "File Not Opening!!!" << endl;
	}

	rfile.close();

}