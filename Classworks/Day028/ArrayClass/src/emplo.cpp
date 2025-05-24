#include<iostream>
using namespace std;
#define MAX 5

class Employee {
public:
	int top = -1;
	int bottom = -1;

	int pushId(int);
	string pushName(string);
	int pushSalary(int);
	int pop();
	void display();
	
	int arr[MAX];
	string arr1[MAX];
	int arr2[MAX];

};

int Employee::pushId(int i) {
	if (top == MAX-1) {
		cout << "Stack is full" << endl;
		return 0;
	}
	top++;
	arr[top] = i;
	return i;
}

string Employee::pushName(string s) {
	if (top == MAX - 1) {
		cout << "Stack is full" << endl;
		return 0;
	}
	arr1[top] = s;
	return s;
}

int Employee::pushSalary(int S) {
	if (top == MAX) {
		cout << "Stack is full"<<endl;
		return 0;
	}
	arr2[top] = S;
	return S;
}

int Employee::pop() {
	if (top == bottom) {
		cout << "Stack is Empty" << endl;
		return 0;
	}
	cout << "poped EmployeeId: " << arr[top] << "\tpoped Employee Name: " << arr1[top] <<"\tSalary : "<<arr2[top] << endl;
	top--;
}

void Employee::display() {
	if (top == bottom) {
		cout << "Stack is Empty" << endl;
		return;
	}

	cout << "Stack Elements are " << endl;
	for (int i = top;i >= 0;i--) {
		cout << "Employee Id: " << arr[i] << "\tEmployee Name: " << arr1[i] <<"\tSalary: "<<arr2[i] << endl;
	}
	cout << endl;
}







int main() {

	Employee e1;

	e1.pushId(7);
	e1.pushName("Ebi");
	e1.pushSalary(7000);
	e1.pushId(8);
	e1.pushName("emi");
	e1.pushSalary(10000);
	e1.display();
	e1.pop();
	e1.display();

}