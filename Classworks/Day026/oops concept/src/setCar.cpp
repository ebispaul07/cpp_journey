#include<iostream>
using namespace std;

class student {
private:
	int rollno;
	char name[20];

public:

	void setName(char* s) {
		strcpy(name, s);
	}
	char* getName() {
		return name;
	}


	void setRollno(int r) {
		rollno = r;
	}
	int  getRollno() {
		return rollno;
	}

	void display() {
		cout << name<<endl;
		cout << rollno<<endl;
	}


};


int main() {

	char n[] = "abc";
	int r = 101;

	student s1;


	s1.setName(n);
	s1.setRollno(r);
	s1.display();

	cout << s1.getName()<<endl;
	cout << s1.getRollno()<<endl;
	

	

}