#include<iostream>
#include<set>
using namespace std;



int main() {

	set<string>s;

	while (true) {
		string user_id;
		cout <<"VISIT: ";
		cin >> user_id;

	
		if (user_id == "UNIQUE") {
			cout << s.size()<<endl;
		}

		else if (user_id == "TOP") {
			for (string x : s) {
				cout << x << endl;
			}
			break;
		}
		else {
			s.insert(user_id);
		}
	}
}