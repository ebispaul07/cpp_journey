#include<iostream>
#include<deque>
#include<list>
using namespace std;

int main() {

	deque<char> dq = { 'A', 'B', 'C' };

	list<int>li = { 1,2,3 };//random access method cannot applied on list like litr[0]....

	for (auto it = dq.begin(); it != dq.end(); ++it) cout << *it << endl;

	auto it = dq.begin();
	cout << it[0] << endl;


	auto litr = li.begin();
	//cout << litr[0] << endl;//it occurs an error
	cout << *litr << endl;
}








