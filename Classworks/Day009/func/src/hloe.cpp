/*
#include<iostream>
using namespace std;

int fun(int a, int b);//declaration


int main() {
	
	cout << fun(3, 4);//function call
}
int fun(int a, int b) {//function definition
	return a + b;
}
*/

/*
#include<iostream>

using namespace std;

int main() {
	int val = 5;
	int* ptr=&val;

	cout << val << endl;
	cout << ptr << endl;
}

*/

//function with input args and no return type
/*
#include<iostream>
using namespace std;

	void fun(int a,int b);

int main() {

	fun(10,3);

}

void fun(int a,int b) {
	
	cout <<a+b ;
}

*/

//function with return type and input
/*
#include<iostream>
using namespace std;


int fun(int a, int b) {
	return a + b;
}


int main() {
	cout<<fun(2,3);
}
*/

//without retun type
/*
#include<iostream>

using namespace std;

void fun();
void sum(int a, int b);

int main() {

	sum(10,11);
	int ch;
	fun();
	cin >> ch;
	switch (ch) {
	case 1:
		cout << "I am one" << endl;
		break;

	case 2:
		cout << "I am second" << endl;
		break;

	default:
		cout << "Error" << endl;
		break;
	}
}

void fun() {
	cout << "ebi" << endl;
	cout << "choice : " ;

}

void sum(int a, int b ) {
	cout <<"Sum:"<< a + b << endl;
}

*/

//Function with return type
/*
#include<iostream>
using namespace std;

int add(int a, int b);


int main() {
	
	int ch;
	 add(10, 3);
	cin >> ch;

	switch (ch){

	case 1:
		cout << "i Am one" << endl;
		break;
	default:
		cout << "ERRROOR" << endl;
		break;
	}
	
}

int add(int a, int b) {
	
	cout << "Sum:" <<a+b<< endl;
	cout << "choice:";
	return a+b;
	
	
}

*/


//

/*

#include<iostream>

bool isPrime(int );
using namespace std;

int main() {
	int num;
	cout << "enter any Number:";
	cin >> num;
	bool ret = isPrime(num);
	if (ret == true) {
		cout << "Given Number:" << num <<"prime" << endl;
	}
	else {
		cout << "Given Number:" << num <<"not" << endl;
	}
}

bool isPrime(int num) {
	bool flag = false;

	for (int itr1 = 2;itr1 < num;itr1++) {
		if (num % itr1 == 0) {
			flag = true;
			break;
		}
	}
	if (flag == false)
		return true;
	else
		return false;
}

*/

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Any Number:";
	cin >> num;

	for (int i = 2;i <= num;i++) {
		if (num % i == 0) {
			cout << ;
		}
		else {

		}
		
	}
}
