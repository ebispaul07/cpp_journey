#include<iostream>
#include<set>
using namespace std;

int main() {
	set<string>s;

	s.insert("Ebi");
	s.insert("ad");
	/*s.insert(40);
	s.insert(20);
	s.insert(30);*/



	auto low = upper_bound(s.begin(), s.end(), "i");
	cout << *low << endl;

	for (string x : s) {
		
		cout << x<<endl;
	}
	

	if (s.find("Ebi") != s.end()) {
		cout << "20 is present";
	}
}