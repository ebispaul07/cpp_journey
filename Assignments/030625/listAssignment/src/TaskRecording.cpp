#include<iostream>
#include<forward_list>
#include<string>
using namespace std;

int main() {
	forward_list<string>li;

	int n = 3;
	string log;

	

	while (true) {
		cout << "Enter logs and print: ";
		cin >> log;

		if (log == "print") {
			break;
		}

		li.push_front(log);

		
		

	}
	int count = 0;
	for (string x : li) {
		if (count == 3) {
			break;
		}
		cout << x << endl;
		count++;
	}

	

}