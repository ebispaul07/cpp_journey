
/*
#include<iostream>
using namespace std;
#define MAX 5

class queue {
private:
	int front = 0;
	int rear = 0;

public:

	int enque(int);
	int deque();
	void display();

	int arr[MAX];


};

void queue::setFront(int f) {
	front = f;
}
int queue::getFront() {
	return front;
}

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
*/


//exp

#include<iostream>
using namespace std;

#define MAX 5

class Queue {
private:
    int front = -1; // Initialize front to -1, indicating the queue is empty
    int rear = -1;  // Initialize rear to -1, indicating the queue is empty

public:
    int enqueue(int);
    int dequeue();
    void display();

    int arr[MAX];
};

// Function to add element to the queue
int Queue::enqueue(int p) {
    if (rear == MAX - 1) {
        cout << "Queue is full" << endl;
        return 0;
    }

    // If queue is empty, set front to 0
    if (front == -1) {
        front = 0;
    }

    rear++;
    arr[rear] = p;
    return p;
}

// Function to remove element from the queue
int Queue::dequeue() {
    if (front == -1 || front > rear) { // Queue is empty or invalid state
        cout << "Queue is Empty" << endl;
        return 0;
    }

    cout << arr[front] << " got popped" << endl;
    front++;

    // Reset front and rear if the queue becomes empty
    if (front > rear) {
        front = rear = -1;
    }

    return 1;
}

// Function to display elements of the queue
void Queue::display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue elements are:" << endl;
    for (int i = front; i <= rear; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    Queue q1;

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    
    q1.display();
    q1.dequeue();


    return 0;
}
