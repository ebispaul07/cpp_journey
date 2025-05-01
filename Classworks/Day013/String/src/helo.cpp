
/*

#include<iostream>
using namespace std;

int main() {

	int arr[3][4] = {
		{10,20,30},{40,50,60}
	};


	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 3;j++) {
			cout << (unsigned long int) & arr[i][j] <<endl;
		}
	}

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 4;j++) {
			cout << "Enter 3rd :";
			cin >> arr[i][j] ;
		}
	}

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 4;j++) {
			cout <<   arr[i][j] << endl;
		}
	}

}

*/

#include<iostream>
using namespace std;

int main() {
	int arr1[2][2] = {
		{1,2},{3,4}
	};

	int arr2[2][2] = {
		{2,3},{4,5}
	};

	int res[2][2] = { 
		{0,0},{0,0}
	};

	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 2;j++) {
			cout << arr1[i][j];
		}
	}

	cout << endl;

	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 2;j++) {
			cout << arr2[i][j];
		}
	}

	cout << endl << endl;
	int sum = 0;

	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 2;j++) {
			//cout <<  arr1[i][j]*arr2[i][j]<<endl;
			//sum = 0;
			for (int k = 0;k < 2;k++) {
				sum = sum + arr1[i][k] * arr2[k][j];
			}
			res[i][j]=sum;

	
			
		
		}
		
	}

	cout << endl;
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 2;j++) {
			cout << res[i][j] << endl;
		}
	}
	return 0;

	
}


/*
#include<iostream>
using namespace std;

int main() {
	char nam[20];

	in
}
*/