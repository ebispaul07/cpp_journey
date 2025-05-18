#include<iostream>
using namespace std;


struct book {
	int sino;
	string author;
};

int main() {

	struct book b1;

	struct book b2 = {1,"Ebi"};

	cout << b2.sino<<endl;
	cout << b2.author<<endl;




}