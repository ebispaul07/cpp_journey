#include<iostream>
using namespace std;

void sem1(int num1) {
	switch (num1)
	{
	case 1:
		int rollno;
		cout << "\t\t\tEnter Your RollNo:";
		cin >> rollno;

		string name;
		cout << "\t\t\tEnter Your Name:";
		cin >> name;

		cout << endl;

		cout << "\t\t\tEnter Your Mark" << endl;

		cout << endl;

		int eng;
		cout << "\t\t\tEnglish:";
		cin >> eng;

		cout << endl;

		int mat;
		cout << "\t\t\tMaths:";
		cin >> mat;

		cout << endl;

		int sci;
		cout << "\t\t\tScience:";
		cin >> sci;

		cout << endl;

		int hnd;
		cout << "\t\t\tHindi:";
		cin >> hnd;

		cout << endl;

		int cse;
		cout << "\t\t\tcomputer:";
		cin >> cse;

		cout << endl;
		cout << endl;

		if (eng <= 100 && mat <= 100 && sci && hnd <= 100 && cse <= 100 && eng >= 0 && mat >= 0 && sci >= 0 && hnd >= 0 && cse >= 0) {






			cout << "\t\t\tRollNo:" << rollno<<'\t'<<"NAME : " << name << endl;
			cout << endl;
			cout << endl;

			cout << "\t\t\tEnglish: " << eng << endl;
			cout << "\t\t\tMaths: " << mat << endl;
			cout << "\t\t\tScience: " << sci << endl;
			cout << "\t\t\tHindi: " << hnd << endl;
			cout << "\t\t\tScience: " << sci << endl;
			cout << "\t\t\tComputer: " << cse << endl;
			 
			cout << endl;
			cout << endl;

			int tot = eng + mat + sci + hnd + cse;
			cout << "\t\t\tYour Result:" << tot << endl;
			cout << endl;





			cout << endl;

			if (tot >= 480) {
				cout << "\t\t\tGrade:" << "A+";
			}
			else if (tot >= 450) {
				cout << "\t\t\tGrade:" << "B+";
			}
			else if (tot >= 400) {
				cout << "\t\t\tGrade:" << "c+";
			}
			cout << endl;

			cout << "\t\t\t=========================" << endl;
			cout << endl;

			
			if (tot > 350) {
				cout << "\t\t\tYou Passed!!!";
			}
			else {
				cout << "\t\t\tYou Failed!!!";
			}

		}
		else {
			cout << "\t\t\tInvalid Input";
		}

		cout << endl;
		cout << endl;
	}
	

}

void sem2(num1) {

}



int main() {

	cout << "\t\t\tAnna University" << endl;
	cout << endl;

	cout << "\t\t\tStudent Grading System" << endl;

	cout << endl;

	int num1;

	cout << "\t\t\tSelect," << endl;
	cout << "\t\t\t1.Semester" << endl;
	cout << "\t\t\t2.Semester" << endl;
	cout << "\t\t\t3.Semester" << endl;
	cout << "\t\t\t4.Semester" << endl;
	cout << "\t\t\t5.Semester" << endl;
	cout << "\t\t\t6.Semester" << endl;
	cout << "\t\t\t";cin >> num1;

	sem1(num1);
}