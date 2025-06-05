#include<iostream>
#include<forward_list>
#include<algorithm>

using namespace std;

forward_list<string>fw;

class Slidding {
public:
	string log;
	
	void addLog() {
		cin >> log;
		if (log != "show") {
			
			fw.push_front(log);
		}
	}

	
	
	

	void print() {
		
			for (string x : fw) {
				cout << x << endl;
			}
			
		
	}
};



int main() {
	Slidding s;
	
	while (true) {
		cout << "Enter Logs and Enter(show) to Print:";
		s.addLog();

		
		
		if (s.log == "show") {
			
			s.print();
			break;
		}
	}
	
	
	

}
