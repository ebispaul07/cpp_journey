
/*

#include<iostream>
using namespace std;

int main() {

	int a = 10;
	int b = 30;
	char ch = 'A';
	float f = 10.5;
/*
	int*ptr=NULL;


	cout << unsigned long int(&b) <<" " << b << endl;
	cout << unsigned long int(&ch) <<" " << ch << endl;
	cout << unsigned long int(&f)<<" " << f << endl;

	
	
	ptr = &b;
	printf( "Adress=%u and value=%u\n",&ptr,ptr);
	printf("\nptr is pointing =%u", ptr);
	printf("\n%u is havinng a value = %d\n", ptr, * ptr);


	*ptr = 101;
	printf("\n%u is havinng a value = %d\n", ptr, *ptr);

	*/

/*
	void* ptr = nullptr;

	ptr = &a;

	printf("Adress=%u and value=%u\n", &ptr, ptr);

	ptr = &ch;

	printf("Adress=%u and value=%u\n", &ptr, ptr);




	ptr = &f;

	printf("Adress=%u and value=%u\n", &ptr, ptr);


}

*/

/*

#include<iostream>
using namespace std;

int main() {

	int a[3] = { 10,20,30 };
	cout << a[0] << "\t" << a[1] << "\t" << a[2] << endl;

	int* ptr = NULL;

	//ptr = &a[0];
	// ptr = &*(a + 0);
	ptr = a;
	cout<<*ptr<< endl;

	ptr++;
	cout << *ptr << endl;

	ptr++;
	cout << *ptr << endl;


}

*/

#include<iostream>
using namespace std;

int main() {

	char line[] = "This is the Cpp";

	for (int i = 0;i < strlen(line);i++) {
		cout << line[i];
	}
		cout << endl;

		char* ptr = nullptr;
		ptr = line;

		while (*ptr != '\0') {
			cout << *ptr;
			ptr++;
		}
	
}