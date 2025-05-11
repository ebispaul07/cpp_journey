
/*
#include<iostream>
using namespace std;
#define MAX 100

int main() {

	int lands[MAX];

	int size;
	cout << "Enter Any Size:";
	cin >> size;

	cout << "Enter array elements:";
	for (int i = 0;i < size;i++) {
		cin >> lands[i];
	}

	int small = lands[0];
	int sec = lands[0];
	int larg = lands[0];

	for (int i = 0;i < size;i++) {
		if (small>lands[i]) {
			small = lands[i];
		}
		 if(sec > lands[i]) {
			 
			sec = lands[i]-1;
		}

		 if (larg < lands[i]) {
			 larg = lands[i];
		}
	}

	cout << small;
	cout << sec;
	cout << larg;


}

*/

/*

#include<iostream>
using namespace std;
#define MAX 100

int main() {
	int arr[MAX];

	int size;
	cout << "Enter Size:";
	cin >> size;

	cout << "Enter Elements in the array:";
	for (int i = 0;i < size;i++) {
		cin >> arr[i];
	}

	int sort;


	for (int i = 0;i <= size;i++) {
		for (int j = 0;j <= size;j++) {
			if (arr[j] < arr[j + 1]) {
				sort = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = sort;
			}
		}
	}

	for (int i = 0;i < size;i++) {
		cout << arr[i];
	}

	cout << endl;
	cout << arr[size - 2];
}
*/



#include<iostream>
using namespace std;
#define MAX 100

int main() {

	int arr[MAX];

	int size;
	cout << "Enter the size:";
	cin >> size;

	cout << "Enter array element:";
	for (int i = 0;i < size;i++) {
		cin >> arr[i];

	}

	int sort;

/*
	for (int i = 0;i <= size;i++) {
		for (int j = 0;j <= size;j++) {
			if (arr[j] < arr[j + 1]) {
				sort = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = sort;
			}
		}
	}

	*/
	int i, j, k;
	for ( i = 0;i < size;i++) {
		//cout << arr[i];
		for ( j = i+1;j < size;) {
			if (arr[i] == arr[j]) {
				//cout << arr[i];

				for ( k = j;k < size - 1;k++) {
					arr[k] = arr[k + 1];

				
					
				}
				size--;
			}
			else {
				j++;
			}
		}
		for ( i = 0;i < size;i++) {
			cout << arr[i];
		}
		
		
		
	}
	



	cout << endl;
	cout << arr[size - 2];


}

