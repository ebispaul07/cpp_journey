
/*
#include<iostream>
using namespace std;
#define MAX 100

int main() {

	char arr[MAX];

	int size;
	cout << "Enter Array Size:";
	cin >> size;

	cout << "Enter Your String:";
	for (int i = 0;i < size;i++) {
		cin >> arr[i];
	}

	char ch1[MAX];
	for (int i =0;i < size;i++) {
		ch1[i] = arr[i];
	}
	
	cout<<"Reversed String :";
	for (int i = size;i > 0;i--) {
		cout  << ch1[i];
	}
}
*/

//string Reverse

/*

#include<iostream>
using namespace std;
#define MAX 100

int main() {

	string arr[MAX];

	int size;
	cout << "Enter the Array Size:";
	cin >> size;

	cout << "Enter ur Sentence :";

	for (int i = 0;i < size;i++) {
		cin >> arr[i];
	}

	string ch[MAX];
	for (int j = 0;j < size;j++) {
		ch[j] = arr[j];
	}

	for (int k = size;k >= 0;k--) {
		cout << ch[k];
	}

}


*/

#include <iostream>
using namespace std;
#define MAX 100

int main() {
	string arr[MAX];

	int size;
	cout << "Enter the number of words: ";
	cin >> size;

	cout << "Enter your sentence word by word:"<<endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	cout << "Reversed sentence:"<<endl;
	for (int i = size - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}

