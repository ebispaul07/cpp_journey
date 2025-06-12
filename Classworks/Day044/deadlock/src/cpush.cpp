#include<iostream>
#include<fstream>
#include<thread>
#include<queue>
#include<string>

using namespace std;

int main() {

	ifstream wrfile("f.txt");

	string line;

	if (wrfile.is_open()) {
		while (getline(wrfile, line)) {


			size_t spacpos = line.find(" ");
			size_t colpos = line.find(":");
			size_t dspacpos = line.find("d");

			//string cpucmd = line.substr(0,spacpos-1);
			//string cpunum = line.substr(colpos + 2);

			string command = line.substr(0, dspacpos + 1);
			string nstr = line.substr(dspacpos + 2);

			//int cpunumb = stoi(cpunum);
			int num = stoi(nstr);

			if (command == "T1: Load 3") {
				cout << num;
			}
		}
	}

}
