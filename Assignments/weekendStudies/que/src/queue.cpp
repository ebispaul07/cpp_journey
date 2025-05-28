#include<iostream>
using namespace std;
#define MAX 5

class queue {
private:

	int front = -1;
	int rear = -1;
	int arr[MAX];
public:

	int enque(int v) {

		if (front == -1) {
			front = 0;
		}
		if (rear == MAX - 1) {
			cout << "Queue is full" << endl;
		}
		rear++;
		arr[rear] = v;
		return v;
	}

	int deque() {
		if ((front == rear + 1) || (front == MAX - 1)) {
			cout << "queue is Empty" << endl;
			return 0;
		}
		cout << "popped " << arr[front] << endl;
		front++;

	}

	void display() {
		if (rear == front) {
			cout << "queue is Empty" << endl;
		}
		cout << "Queue elements are :" << endl;
		for (int i = front;i <= rear;i++) {
			cout << arr[i] << endl;
		}
		cout << endl;
	}

};

int main() {
	queue q1;
	q1.enque(10);
	q1.enque(20);
	

	q1.display();
	q1.deque();
	
	q1.display();

}


