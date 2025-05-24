#include<iostream>
using namespace std;
#define MAX 100

int top = -1;
int bottom = -1;

int push(int);
int pop();
void display();
int arr[MAX];


int main() {

	push(10);
	push(20);
	push(30);
	display();
	pop();
	display();

}

int push(int v) {
	if (top == MAX-1) {
		cout << "Stack is full" << endl;
	}
	top++;
	arr[top]=v;
	return 0;
	
}

int pop() {
	if (top == bottom) {
		cout << "Empty Stack"<<endl;
		return 0;
	}
	cout << arr[top] << "poped out" << endl;
	top--;
}

void display() {
	if (top == bottom) {
		cout << "Empty Stack" << endl;
		return;
	}
	cout << "Stack elements are :"<<endl;
	for (int i = top;i >= 0;i--) {
		cout << arr[i] << endl;
	}
}