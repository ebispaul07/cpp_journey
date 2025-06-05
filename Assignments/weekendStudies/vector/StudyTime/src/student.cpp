#include<iostream>
#include<vector>
using namespace std;

class Student {
private:
	vector<string>names;
	vector<int>marks;
public:
	void addStudent(string name, int mark) {
		names.push_back(name);
		marks.push_back(mark);
	}

	void printStudents() {
		for (size_t i = 0;i < names.size();i++) {
			cout << names[i] << " " << marks[i] << endl;
		}
	}

	void totalMarks() {
		int total = 0;
		for (int x : marks) {
			total = total + x;
		}
		cout<<"Total Marks: " << total;
	}
	
};


int main() {
	Student s;
	
	int num;
	cout << "Enter number of student:";
	cin >> num;

	for (int i = 0;i < num;i++) {

		string name;
		int mark;
		cout << "Enter Student name: ";
		cin >> name;
		cout << "Enter your mark";
		cin >> mark;
		s.addStudent(name,mark);
	}
	

	s.printStudents();
	s.totalMarks();
	

}