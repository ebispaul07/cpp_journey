
/*
#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char s1[20] = { '\0', };
	char s2[20] = { '\0', };
	char s3[20] = { '\0', };

	cin >> s1 >> s2;

	ptr = strcpy(s3, s1);

	strcpy_s(s3, s1);
	cout << s3 << endl;
	strcat_s(s3, s2);
	cout << s3;

	return 0;
}

*/

//string compare

/*

#include<iostream>
using namespace std;

int main() {

	const char* str1 = "heloo";
	const char* str2 = "World";

	int res = strcmp(str1, str2);

	if (res == 0) {
		cout << "Equal";
	}
	else if (res < 0) {
		cout << "str1 is lessthan str2";
	}
	else {
		cout << "str1 is greaterthan str2";
	}

}

*/


#include<iostream>
using namespace std;

void display(int arr[],int CAP );


int main() {


	int a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(a[0]);
	display(a,n);
	return 0;

}

void display(int arr[],int CAP) {
	for (int i = 0;i <CAP ;i++) {
		cout << arr[i] << endl;
	}
}