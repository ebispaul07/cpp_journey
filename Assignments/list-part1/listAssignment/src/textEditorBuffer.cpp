#include<iostream>
#include<list>
using namespace std;

int main() {
	list<string>li;

	
	while (true) {
		string word;
		cout << "INSERT ";
		cin >> word;

		li.push_back(word);

		if (word == "UP") {
			if (!li.empty()) {
				li.push_front(li.back());
			}
		}
		else if (word == "DOWN") {
			li.push_back(li.back());
		}
		else if (word == "PRINT") {
			for (string x : li) {
				cout << x << endl;
			}
		}
	}
}