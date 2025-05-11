#include<iostream>
using namespace std;
#define MAX 100

int main() {
	int arr[100];

	char str[MAX] = {};
	cout << "Enter your String:";
	cin.getline (str,99);

	char outstr[MAX] = { 0 };

	int i, j;

	for ( i = 0,j=0;i <= strlen(str);i++) {
		
		if (str[i] ==' ') {

			continue;
		}
		else {
			//continue
			outstr[j++] = str[i];
		}

	}
	cout << outstr;



}