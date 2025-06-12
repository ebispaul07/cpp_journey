#include<iostream>
#include<fstream>
#include<string>
#include<thread>
#include<mutex>
#include<set>
using namespace std;






int main() {
	set<int>s;

	ifstream wrfile("f.txt");

	string line;

	if (wrfile.is_open()) {
		while (getline(wrfile, line)) {

			size_t spacpos = line.find(" ");
			size_t colpos = line.find(":");
			size_t dspacpos = line.find("d");


			string command = line.substr(0,dspacpos+1);
			string nstr = line.substr(dspacpos+2);

			int num = stoi(nstr);

			if (command == "T1: Load") {
				this_thread::sleep_for(chrono::seconds(num));
				cout << "CPU-1 picked Task T1 (Load:" << num << ")"<<endl;
				s.insert(num);
			} 
			if (command == "T2: Load") {
				this_thread::sleep_for(chrono::seconds(num));
				cout << "CPU-2 picked Task T2 (Load:" << num << ")"<<endl;
				s.insert(num);
			} 
			if (command == "T3: Load") {
				this_thread::sleep_for(chrono::seconds(num));
				cout << "CPU-3 picked Task T3 (Load:" << num << ")"<<endl;
				s.insert(num);
			}

			
			
			/* if (command == "T4: Load") {
				s.insert(num);
			}else if (command == "T5: Load") {
				s.insert(num);
			}*/

		}

		for (int x : s) {
			cout << x << endl;
		}
	}

	cout << *s.begin();
	
}
