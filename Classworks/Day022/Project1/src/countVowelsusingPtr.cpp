#include<iostream>
using namespace std;
#define MAX 100

void cnt( char ch,char str) {

	int count = 1;
	//char ch[] = { 'a','e','i','o','u' };
	
	
	for (int i = 0;i < 5;i++) {
		
		for (int j = 0;j <= 5;j++) {
			if (ch[i] == str[j]) {
				 count++;
			}
		}
	}

	cout << count;
	

}



int main() {
	char ch[] = { 'a','e','i','o','u'};

	char str[MAX];
	cout << "Enter Any String:";
	cin.getline(str, 100);

	

	cnt(ch,str[MAX]);
	
	return 0;

}