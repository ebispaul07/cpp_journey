#include<iostream>
using namespace std;
#define MAX 100

int main() {

	char arr[MAX];
	bool flag;
	char ch[] = { 'A','E','I','O','U','a','e','i','o','u' };

	char str[MAX];
	cout << "Enter your sentence:";
	cin.getline(str, MAX);
	int k = 0;
	for (int i = 0;i <strlen(str);i++) {
		flag = true;
		for (int j = 0;j < 10;j++) {
			if (ch[j] == str[i]) {

				flag = false;
				break;

			}
		}
		if (flag)
		{
			arr[k] = str[i];
			k++;
		}
		
	}
	arr[k] = '\0';
	cout << arr;

}