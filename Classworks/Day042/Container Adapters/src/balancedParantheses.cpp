#include<iostream>
#include<stack>

using namespace std;

int main() {

	stack<string>s;

	string open,close;
	cout << "Enter Any parantheses:";
	cin >> open>>close;

	s.push(open);
	

	while (!s.empty()) {
		if (open == "[" && close == "]" ||
			open == "{" && close == "}" ||
			open == "(" && close == ")") {
			s.pop();

			if (s.empty()) {
				cout << "Balanced" << endl;
				break;
			}
			else {
				cout << "unbalanced" << endl;
				break;
			}
		}
		else {
			cout << "unbalanced" << endl;
			break;
		}
	}



}