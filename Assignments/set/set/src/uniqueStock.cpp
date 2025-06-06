#include<iostream>
#include<set>

using namespace std;

int main() {
	set<int>s;

	while (true) {
		int num;
		cout << "select," << endl;
		cout << "1.add" << endl;
		cout << "2.remove" << endl;
		cout << "3.Minmax" << endl;
		cin >> num;
		switch (num) {
		case 1:
			int ad;
			cout << "ADD: ";
			cin >> ad;
			s.insert(ad);
			break;
		case 2:
			int re;
			cout << "Remove: ";
			cin >> re;
			if (ad == re) {
				s.erase(re);
				cout << "removed" << endl;
			}
			break;
		case 3:

			for (int x : s) {
				cout << x <<" ";
				
			}
			break;
		}
	}


	


}