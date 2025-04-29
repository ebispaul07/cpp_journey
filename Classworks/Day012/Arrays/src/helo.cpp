//Arrays
/*
#include<iostream>
using namespace std;

int main() {
	int arr[5];
	cin >>arr[0];
	cin >> arr[1];

	cout << arr[0]+arr[1];

}
*/

/*

#include<iostream>
using namespace std;

int main() {
	int arr[3];
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[3]) << endl;
	cout << sizeof(arr[2]) << endl;
	cout << sizeof(arr[1]) << & arr[1] << endl;
	cout << sizeof(arr[0])<<&arr[0] << endl;

	printf("%u", &arr[1]);
	cout << endl;
	printf("%u", &arr[0]);
	cout << endl;

	int a, b, c;
	cout << endl << endl;
	printf("%u", &a);
	cout << endl;
	printf("%u", &b);
	cout << endl;
	printf("%u", &c);
}

*/

//

/*
#include<iostream>
using namespace std;

int main() {
	int arr[3] = { 2,3,4};

	cout << arr[0];
	cout << arr[1];
	cout << arr[2];
	cout << arr[3];//Garbage value when we declare out of scope
}
*/

/*

#include<iostream>
using namespace std;

int main() {

	int arr[3] = { 2,3,4 };

	for (int i=0;i <= 2;i++) {
		cout << arr[i];
	}
	cout << endl;
	arr[0] = 23;
		arr[1] = arr[0] * 10;

		cout << arr[1];
}
*/

/*

#include<iostream>
using namespace std;

int main() {
	int arr[10];

	cout << "Enter Some number:";
	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	cin >> arr[3];
	cin >> arr[4];
	cin >> arr[5];
	cin >> arr[6];
	cin >> arr[7];
	cin >> arr[8];
	cin >> arr[9];

	int num;
	cout << "Enter value to check is it in array:";
	cin >> num;

	if (arr[10] == num) {
		cout << "Number is Available" << endl;
	}
	else {
		cout << "Not Available";
	}

	
}

*/

//

/*
#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int b[2] = { 1,2 };
	int c = 20;

	cout << b[0];
}

*/

//


/*

#include<iostream>
using namespace std;

int main() {

	int arr[10];
	int i;

	for ( i = 0;i <= 9;i++) {
		cout << "Enter"<<" "<<i<<":";
		cin >> arr[i];
		}

	for (int j = 0;j <= 9;j++) {

		if (arr[j] % 2 == 0) {
			cout << "Even" << endl;
			return 0;
		}
		
		cout << "odd";
	}
	
}


*/

/*

#include<iostream>
using namespace std;

int main() {

	int ar[] = { 1,2,3,4,5,6,7 };
	int i;

	int noElems = sizeof(ar) / sizeof(ar[0]);

	cout << "Output Array:" ;

	for (int i = 0;i <= noElems;i++) {
		if (ar[i] % 2 == 0) {
			cout << i<<",";
		}
	}

	

	
	for (int j = 0;j<= noElems;j++) {
		if (ar[j] % 2 != 0) {
			cout << j <<",";
			
		}
		
	}
	
	cout  << endl;
	
}

*/

#include<iostream>
using namespace std;

bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}

	for (int i = 2;i <= i * i<=num;i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}


int main() {

	int num;
	cout << "Enter:";
	cin >> num;

	
	cout << num << endl;

		for (int i = 1;i <=num;i++) {
			if (isPrime(i)) {
				cout << i;
			}
		}

	


}
