#include<iostream>
#include<cstring>
using namespace std;

int add(int, int);
char* add(char*, char*);


int main() {

	cout << add(10, 20) << endl;

	char s1[100] = "EBi";
	char s2[10] = "Paul";
	cout << add(s1, s2)<<endl;

}

int add(int a, int b) {
	return a + b;
}

char* add(char *s1,char *s2){

			strcat_s(s1,s2);

			return s1;
}