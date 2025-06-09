#include<iostream>
#include<string>

using namespace std;

class Uname {
protected:
	int size;
public:
	Uname(int size) {
		this->size = size;
	}
	int what() {
		return size;
	}

	

};

bool checkUsername(string name) {
	bool flag = true;
	int n = name.length();

	if (n < 5) {
		throw Uname(n);
	}
	for (int i = 0;i < n - 1;i++) {
		if (name[i] == 'w' && name[i + 1] == 'w') {
			flag = false;
		}
		
	}
	return flag;
}

int main() {
	
	int t;
	
	cin >> t;

	while (t--) {
		string name;
		cin >> name;

		try
		{
			bool flag = checkUsername(name);
			if (flag) {
				cout << "valid";
			}
			else {
				cout << "invalid";
			}
		}
		catch (Uname e)
		{
			cout <<" Invalid :" << e.what();
		}

	}

}