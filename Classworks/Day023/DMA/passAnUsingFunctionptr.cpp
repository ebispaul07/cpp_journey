#include<iostream>
using namespace std;


//void display(char[]);

void display(const char name[]) {


	while (*name != '\0') {
		cout << *name++;
	}
	cout << endl;
}


int main() {

	char s[] = "Ebi";
	display(s);
	display("Paul");

}