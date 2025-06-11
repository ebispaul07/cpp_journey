#include<iostream>
#include<set>
#include<string>
#include<stack>
using namespace std;

int main() {

	stack<string>forward;
	stack<string>backward;

	string current;

	while (true) {
		string cmd, web;
		cout << "Enter Your Commad (visit/back/forward): ";
		cin >> cmd;


		

		if (cmd == "visit") {

			cin >> web;
			while (!forward.empty()) {
				forward.pop();

			}
			backward.push(web);
			current = web;

		}
		else if (cmd == "back") {

			if (backward.empty()) {
				cout << "Backward is Empty" << endl;
			}
			else {
				forward.push(current);

				current = backward.top();
				backward.pop();
			}
			cout << current << endl;

		}
		else if (cmd == "forward") {
			
			if (forward.empty()) {
				cout << "It is empty" << endl;
			}
		
				backward.push(current);

				current = forward.top();
				forward.pop();
				cout << "Forward to" << current << endl;
			
		}
		else if (cmd == "out") {
			cout << "Exiting!!!" << endl;
			break;
		}
	}
	
}