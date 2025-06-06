#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string>v;

class Filetrack {
private:

public:

	void addFile() {
		string add;
		cin.ignore();
		getline(cin, add);
		

		v.push_back(add);
	}

	void access() {
		string aces;
		cin.ignore();
		getline(cin, aces);

		cout << "Accessed File...." << aces << endl;
	}

	void delet() {
		string filename;
		cin.ignore();
		getline(cin, filename);

		auto it = find(v.begin(), v.end(), filename);
		if (it != v.end()) {
			v.erase(it);
			cout << "File Deleted....!" << filename << endl;
		}
		else {
			cout << "No File to Deleted.....!" << endl;
		}
	}

	void listallFiles() {
		if (v.empty()) {
			cout << "No File Available...!!" << endl;
			return;
		}

		cout << "Listing File..";
		for (auto x : v) {
			cout << x << "->";
		}

	}

};

int main() {

	Filetrack f;

	while (true) {

		int num;
		cout << "Select," << endl;
		cout << "1.ADD" << endl;
		cout << "2.ACCESS" << endl;
		cout << "3.DELETE" << endl;
		cout << "4.LIST_ALL" << endl;
		cout << "5.LIST_RECENT" << endl;
		cout << "6.LIST_BY_USER" << endl;
		cin >> num;

		switch (num) {
		case 1:
			cout << "ADD ";
			f.addFile();
			break;
		case 2:
			cout << "ACCESS ";
			f.access();
			break;
		case 3:
			cout << "DELETE";
			f.delet();
		case 4:
			cout << "LISTING ALL FILES";
			f.listallFiles();
		}

	}
	

	
}