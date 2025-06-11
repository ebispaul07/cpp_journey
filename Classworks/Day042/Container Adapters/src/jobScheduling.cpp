#include<iostream>
#include<queue>
using namespace std;



int main() {

	queue<int>q;

	string name;
	cout << "Enter Your Name:";
	cin >> name;
	
	int num;
	cout << "Enter Any Number: ";
	cin >> num;

	while (num >10) {
		q.push(10);
		num = num - 10;
	}
	if (num > 0) {
		q.push(num);
	}
	
	while (!q.empty()) {
		cout <<"processing: " << name << " " << q.front() << " pages" << endl;
		
		q.pop();
	}

}