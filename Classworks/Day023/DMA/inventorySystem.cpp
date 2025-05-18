#include<iostream>
using namespace std;
#define MAX 100

typedef struct crud {
	int create[MAX];
	int read[MAX];
	int update[MAX];
	int delet[MAX];

}cr;

int getProd(cr*);
int adup(cr c1);
void disply(cr c1);

int main() {

	cr c1[3];
	for (int i = 0;i < 3;i++) {
		getProd(&c1[i]);
	}
	cout << endl;

	for (int i = 0;i < 3;i++) {
		adup(c1[i]);
	}
	
	
	for (int i = 0;i < 3;i++) {
		disply(c1[i]);
	}


}


int getProd(cr* c1) {
	int product;
	cout << "Enter the product ID to add: ";
	cin >> product;

	for (int i = 0; i < MAX; i++) {
		if (c1->create[i] == 0) {  
			c1->create[i] = product;
			break;
		}
	}

	return 0;
}


int adup(cr c1) {

	//int prod = c1.create[MAX];

	int sum = 0;
	for (int i = 0; i < MAX; i++) {
		if (c1.create[i] != 0) {
			sum = sum + c1.create[i];
			
		}
		
	}
	
	return sum;

}

void disply(cr c1) {
	int prodSum = adup(c1); 
	cout << "Sum of added products: " << prodSum << endl;
}