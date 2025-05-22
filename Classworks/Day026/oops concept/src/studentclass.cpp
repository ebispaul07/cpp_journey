#include<iostream>
using namespace std;

class Student {

private:
	int s_id;
	string name;
	int s_age;
	string place;
	int classNo;
	string schoolName;
	float mark[20];

public:

	void setId(int i) {
		s_id = i;
	}
	int getId() {
		return s_id;
	}

	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}

	void setAge(int a) {
		s_age = a;
	}
	int getAge() {
		return s_age;
	}
	void setPlace(string p) {
		place = p;
	}
	string getPlace() {
		return place;
	}
	void setClassno(int n) {
		classNo = n;
	}
	int getClassno() {
		return classNo;
	}

	void setSchool(string h) {
		schoolName = h;
	}
	string getSchool(){
		return schoolName;
	}

	void setMark(float m[]) {
		for (int i = 0;i < 4;i++) {
			mark[i] = m[i];
		}
	}

	void display() {
		cout << endl;
		cout << "ID: " <<s_id<< endl;
		cout << "Name: " <<name<< endl;
		cout << "Age: " <<s_age<< endl;
		cout << "Place: " <<place<< endl;
		cout << "ClassNo: " <<classNo<< endl;
		cout << "School Name: " << schoolName << endl;
		for (int i = 0;i < 4;i++) {
			cout << mark[i] << endl;
		}
		cout << endl;
	}
	
};



int main() {

	Student s1;

	float m[]={ 10,20,30,40 };
	
	s1.setId(07);
	s1.setName("Ebi");
	s1.setPlace("Kollemcode");
	s1.setClassno(10);
	s1.setAge(21);
	s1.setSchool("ABC Matric Hr Sec School");

	s1.setMark(m);

	s1.display();

}