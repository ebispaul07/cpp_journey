#include<iostream>
#include<string>
#include<fstream>
#include"processor.h"
#include<vector>
#include<map>
#include<arithmetic.h>

using namespace std;
vector<int>v;

void Processor:: setInstr(string instr) {
	this->instr = instr;
}
string Processor::getInstr() {
	return instr;
}
void Processor::setMemSize(int memSize) {
	this->memSize = memSize;
}
int Processor::getMemSize() {
	return memSize;
}

void Processor::storeVtR() {
	map<string, int>m;
	ifstream retF("instructions.txt");

	string line;
	getline(retF, line);


	m.insert({ "AX",500 });
	

	m["AX"]=12;
	
	for (auto x : m) {
		cout << x.second << endl;
	}


	
}

void Processor::storeVtM() {
	map<string, string>m;
	m.insert({"AX","[4]"});

	for (auto x : m) {
		cout << x.first << " " << x.second << endl;
	}
}


void Processor::storeVrM() {
	map<string, string>m;
	m.insert({ "[4]","AX"});

	for (auto x : m) {
		cout << x.first << endl;
	}
}

void Processor::storeVtMA() {
	map<string, int>m;
	m.insert({ "[4]",500});

	for (auto x : m) {
		cout << x.first << " " << x.second << endl;
	}
}


void Processor::fileHandl() {

	
	map<string,int>m;

	ifstream readF("instructions.txt");

	string line;
	int num;
	if (readF.is_open()) {
		
		//getline(readF, line, ',');
		while (getline(readF, line, ',')) {
			//cout << line;

			

			if (line == "HLT") {
				break;
			}
		}

		/*if (line.find("2")) {
			cout << line;
		}*/
		getline(readF, line,'M');

		//v.push_back(line);
		
		

		
		for (int i = 0;i < line.size();i++) {
			if (line == "12") {
				cout << line;
			}
		}
		
		
		
		//v.insert(readF,line);
		/*for (auto x : v) {
			cout << x;
		}*/
		
		

		//getline(v.begin(), v.end());

		/*if (line.find("AX")) {
			cout << line;
		}*/
		
			readF.close();

	}



}