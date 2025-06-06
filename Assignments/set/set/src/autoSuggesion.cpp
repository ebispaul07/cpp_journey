#include<iostream>
#include<set>
using namespace std;

int main() {
	set<string>s;


	string query;
	cin >> query;

	bool flag = false;
	string insert[] = { "apple", "application", "banana", "apply", "ball" };

	for (string w : insert) {
		s.insert(w);
	}
	
		if (s.find(query) != s.end()) {
			flag = true;
			
		}
	

	if (flag) {
		for (const string& x : s) {
			cout << x << " ";
		}
	}
}