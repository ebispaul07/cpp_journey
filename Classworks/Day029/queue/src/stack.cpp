#include<iostream>
using namespace std;

#define MAX 5

int top = -1;
int bottom = -1;

int push(int);
int pop();
void display();
int arr[MAX];


int main() {

	push(10);
	push(20);
	display();
	pop();

}

int push(int v) {
	if (top == MAX - 1) {
		cout << "Stack is full" << endl;
	}
	top++;
	arr[top] = v;
	return v;

}

int pop() {
	if (top == bottom) {
		cout << "Stack is empty" << endl;
		return 0;
	}

	cout << "element is poped" << arr[top]<<endl;
	top--;
	return 0;
}

void display() {
	if (top == bottom) {
		cout << "Stack is empty" << endl;
	}
	cout << "Stack Elements are :";
	for (int i = top;i >= 0;i--) {
		cout << arr[i];
	}
	cout << endl;
}