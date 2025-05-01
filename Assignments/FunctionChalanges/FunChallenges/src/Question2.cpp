/*
#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter:";
	cin >> num;
	int n;

	for (int i = 1;i <= num;i=i+2) {
		cout << i << ",";

	}
	cout << "\b";
}
*/





#include<iostream>
using namespace std;

void fun(int num,int co) {

	if (co >= num) {
		return;
	}
	if (num > 0) {
		cout << co;
		fun(num,co + 2);
	}


}

int main() {
	int num,co=1;
	cout << "Enter:";
	cin >> num;
	 fun(num, co);
}

