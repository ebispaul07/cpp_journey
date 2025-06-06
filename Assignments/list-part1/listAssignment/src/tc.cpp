#include <iostream>
#include <list>
using namespace std;

int main() {
	list<string> li;
	string word;

	while (true) {
		cout << "INSERT: ";
		cin >> word;

		if (word == "UP") {
			if (!li.empty()) {
				li.push_front(li.back()); 
			}
		}
		else if (word == "DOWN") {
			if (!li.empty()) {
				li.push_back(li.back()); 
			}
		}
		else if (word == "PRINT") {
			cout << "List Contents:\n";
			for (const string& x : li) {
				cout << x << endl;
			}
		}
		else if (word == "EXIT") {
			break; 
		}
		else {
			li.push_back(word); 
		}
	}

	return 0;
}
