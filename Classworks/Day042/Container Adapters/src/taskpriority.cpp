#include<iostream>
#include<queue>

using namespace std;

int main() {

	priority_queue<int>q;
	priority_queue<string>s;

	while (true) {
		string job;
		int num;

		cout << "Enter task with Priority: ";
		cin >> job>>num;

		s.push(job);
		q.push(num);

		if (job == "print") {

			while (!q.empty()&&!s.empty()) {
				cout <<"Execute: " <<s.top()<< " with Priority " << q.top() << endl;
				s.pop();
				q.pop();
			}
			break;
		}

	}
}