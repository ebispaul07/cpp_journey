#include<iostream>
#include<set>
using namespace std;

int main() {
	set<int>s;

	while (true) {
		int num;
		cout << "select," << endl;
		cout << "1.book" << endl;
		cout << "2.check" << endl;
		cin >> num;
		
		switch (num) {
		case 1:
			int book;
			cout << "BOOK: ";
			cin >> book;
			s.insert(book);
			break;
		case 2:

			int che;
			cout << "Check:";
			cin >> che;

			if (s.find(che) == s.end()) {
				cout << "free" << endl;
			}
			else {
				cout << "Already Booked" << endl;
			}
			break;
		default:
			cout << "invalid Input!!!" << endl;
		}
	}

}