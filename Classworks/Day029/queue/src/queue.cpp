#include<iostream>
using namespace std;
#define MAX 5

class queue {
public:
	int front = 0;
	int rear = 1;

	int enque(int);
	int deque();
	void display();

	int arr[MAX];


};

int queue::enque(int p) {

	if (front == MAX-1) {
		cout << "queue is full" << endl;
		return 0;
	}

	front++;
	arr[front] = p;
	return p;

}

int queue::deque() {
	
	if ((rear==front)||(front==MAX)) {
		cout << "Queue is Empty" << endl;
		rear = 0;front = 0;
		return 0;
	}
	cout << arr[rear] << "got popped" << endl;

	rear--;
}

void queue::display() {
	if (front == -1) {
		cout << "empty" << endl;
		return;
	}

	cout << "que elem are"<<endl;
	for (int i = 1;i <= front;i++) {
		cout << arr[i] << endl;
	}


}

int main() {

	queue q1;

	q1.enque(10);
	q1.enque(20);
	q1.enque(30);
	q1.display();
	q1.deque();
	q1.deque();
	q1.display();

}