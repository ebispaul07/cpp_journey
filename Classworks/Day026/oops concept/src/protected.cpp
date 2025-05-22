#include<iostream>
using namespace std;

class Student {
protected:
	int rollno;
	string name;
	string dept;

public:
	void display() {
		cout << "Hello" << endl;
		cout << name<<endl;
		cout << rollno<<endl;
		cout << dept<<endl;
	}

	void setName(string s,int r,string d) {
		
		name = s;
		rollno = r;
		dept = d;
		
	}
	
};




int main() {

	Student s1;

	s1.setName("ebi", 7, "cse");
	
	
	s1.display();
	

	

}
