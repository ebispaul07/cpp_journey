#include<iostream>
#include<deque>
using namespace std;

int main() {
	deque<string>d;

	string command;

	while (true) {

		cout << "Enter your command: ";
		cin >> command;

		if (command == "visit") {
			cout << "Enter web: ";
			cin >> command;

			d.push_back(command);
		}
		else if (command == "back") {
			d.back();
		}
		else if (command == "forward") {
			d.push_front(command);
		}
		else if (command == "current") {
			for (string x : d) {
				cout << x;
			}
		}

	}
}

