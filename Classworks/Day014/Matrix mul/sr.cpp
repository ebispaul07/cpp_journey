/*
#include<iostream>
using namespace std;

int main() {
	char line[] = "There are fruits in the basket";

	//unsigned long int r1 = 0, r2 = 0, r3 = 0;
	char ss1[] = "are";
	char ss2[] = "i";

	int p1 = 0, p2 = 0;

	char* res1 = strstr(line, ss1);
	char* res2 = strstr(line, ss2);

	if (res1 != nullptr) {

		p1 = (unsigned long int)res1 - (unsigned long int)line;

	}
	else {
		p1 = -1;
	}

	if (res2 != nullptr) {

		p2 = (unsigned long int)res2 - (unsigned long int)line;

	}
	else {
		p2 = -1;
	}



}

*/


//strtok

#include<iostream>
using namespace std;

int main() {

	char str1[] = "1011,Ebi,744";
	char delimit[] = ",";

	char* result = nullptr;

	result = strtok(str1, delimit);

	cout << result << endl;

	result = strtok(NULL,delimit);//the null reference in the substring input until null

	cout << result << endl;

	if (result != nullptr) {
		cout << result << endl;
	}
	else {
		cout << "end of String reached";
	}

	return 0;
}