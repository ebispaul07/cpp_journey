#include<iostream>
using namespace std;

typedef struct shape {
	int length;
	int width;
}SH;



int main() {
	SH s1;
	s1.length = 10;
	s1.width = 20;

	SH s2;
	s2.length = 10;
	s2.width = 20;

	SH s3;
	s3.length = s1.length + s2.width;



	cout << s3.length << endl;


}