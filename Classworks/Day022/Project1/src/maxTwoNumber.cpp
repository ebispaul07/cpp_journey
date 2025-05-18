
//Find the maximum of two Numbers

#include<iostream>
using namespace std;

int max(int*, int*);

int max(int* x, int* y) {
	int retvalue = 0;

	if (*x < *y) {
		retvalue = *y;
	}
	else {
		retvalue = *x;
	}

	//*retvalue = (*x>*y)?(*x):(*y);
	//return retvalue;

	return retvalue;

	//return((*x>*y) ? *x:*y);//optimized code


}

int main() {
	
	int x, y;

	x = 40;
	y = 20;

	cout << max(x, y)<<endl;
	
    
}