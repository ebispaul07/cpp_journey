#include<iostream>
#include<list>
using namespace std;

int main() {
	list<string>ta;
	string task;
	while (true) {

		cout << "Enter your task(add/urgent/remove/show):";
		cin >> task;

		string name;

		if (task == "add") {

			cout << "Enter task Name:";
			cin >> name;

			ta.push_back(task +" " + name);
		}
		else if (task == "urgent") {

			cout << "Enter task name:";
			cin >> name;

			ta.push_front(task +" " + name);
		}
		else if (task == "remove") {
			
			cout << "Enter task name: ";
			cin >> name;
			
				ta.remove(name);
			
				cout << "removed" << endl;
				
			
		}
		else if (task == "show") {

			cout << "Tasks: ";
			for (string x : ta) {
				cout << x << "->";
				
			}
			cout << "<-"<<endl;
			break;
		}
	}
}