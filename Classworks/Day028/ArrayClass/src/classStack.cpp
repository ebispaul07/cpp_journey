#include<iostream>
using namespace std;
#define MAX 5

class Stack {
public:
	int top = -1;
	int bottom = -1;

	int push(int);
	int pop();
	void display();
	int arr[MAX];


};

int Stack::push(int v) {
	if (top == MAX - 1)
	{
		cout << "Stack is full" << endl;
		return 0;
	}

	top++;
	arr[top] = v;

	return 0;
}

int Stack::pop() {
	if (top == bottom) {
		cout << "Stack is empty" << endl;
		return 0;
	}
	cout << arr[top] << "got popped out" << endl;
	top--;
}

void Stack::display() {

	if (top == bottom) {
		cout << "Stack is Empty";
		return;
	}


	cout << "stack elements are: " << endl;
	for (int i = top;i >= 0;i--) {
		cout << arr[i] << endl;
	}
	cout << endl;
}



int main() {

	Stack s1;
	s1.push(10);
	s1.push(30);
	s1.push(90);
	s1.display();
	//s1.pop();
	//s1.display();

}