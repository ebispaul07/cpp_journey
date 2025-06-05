#include<iostream>
#include<vector>

#include<algorithm>

using namespace std;


int main() {

	vector<int>marks;

	int num;
	cout << "Enter 5 marks: ";
	for (int i = 0;i < 5;i++) {
		cin >> num;
		marks.push_back(num);
	}

	sort(marks.begin(), marks.end());

	
	for (int i = 0;i <5;i++) {
		 marks[i];
	}

	cout << "All scores : ";
	reverse(marks.begin(), marks.end());
	for (int i = 0;i < 5;i++) {
		cout << marks[i] << " ";
	}
	cout << endl;


	cout << "Top 3 Scores: ";
	for (int i = 0;i < 3;i++) {
		cout << marks[i]<<" ";
	}
	cout << endl;

	cout << "Unique scores: ";
	unique(marks.begin(), marks.end());
	for (int i = 0;i < 4;i++) {
		cout << marks[i] << " ";
	}
	cout << endl;


}