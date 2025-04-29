/*
#include<iostream>
using namespace std;

int main() {

	int mobileStat, batterystat;
	cout << "Enter Your Mobile status ON(1) or OFF(0) or OTHER(-1):";
	cin >> mobileStat;


	if(mobileStat==1){
		cout << "Enter Your Battery Percentage:";
		cin >> batterystat;
		if (batterystat <= 10) {
			cout << "Plug in";
		}

		if (batterystat > 10) {
			cout << "Use the mobile what you want!!!";
		}

	}

	if (mobileStat == 0) {
		cout << "Switch ON";
	}

	if (mobileStat == -1) {
		cout << "Mobile is Dead";
	}

}

*/

//Frequency
/*
#include<iostream>
using namespace std;

int main() {
	int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0,
		count6 = 0, count7 = 0, count8 = 0, count9 = 0;

	int num;
	cout << "Enter:";
	cin >> num;

	while (num > 0) {
		int digit = num % 10;
		
		

		if (digit == 0) {
			count0++;
		}
		else if (digit == 1) {
			count1++;
		}
		else if (digit == 2) {
			count2++;
		}
		else if (digit == 3) {
			count3++;
		}
		else if (digit == 4) {
			count4++;
		}
		else if (digit == 5) {
			count5++;
		}
		else if (digit == 6) {
			count6++;
		}
		else if (digit == 7) {
			count7++;
		}
		else if (digit == 8) {
			count8++;
		}
		else if (digit == 9) {
			count9++;
		}


		num = num / 10;
	}

	cout << "0:" << count0 << endl;
	cout << "1:" << count1 << endl;
	cout << "2:" << count2 << endl;
	cout << "3:" << count3 << endl;
	cout << "4:" << count4 << endl;
	cout << "5:" << count5 << endl;
	cout << "6:" << count6 << endl;
	cout << "7:" << count7 << endl;
	cout << "8:" << count8 << endl;
	cout << "9:" << count9 << endl;

}

*/

//frequency using Switch

/*
#include<iostream>
using namespace std;

int main() {
	int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0,
		count6 = 0, count7 = 0, count8 = 0, count9 = 0;

	int num;
	cout << "Enter:";
	cin >> num;

	while (num > 0) {
		int digit = num % 10;

		switch (digit) {
		case 0:
			count0++;
			break;
		
		case 1:
			count1++;
			break;
	
		case 2:
			count2++;
			break;

		case 3:
			count3++;
			break;

		case 4:
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		case 7:
			count7++;
			break;
		case 8:
			count8++;
			break;
		case 9:
			count9++;
			break;


		}

		

		num = num / 10;
	}

	cout << "0:" << count0 << endl;
	cout << "1:" << count1 << endl;
	cout << "2:" << count2 << endl;
	cout << "3:" << count3 << endl;
	cout << "4:" << count4 << endl;
	cout << "5:" << count5 << endl;
	cout << "6:" << count6 << endl;
	cout << "7:" << count7 << endl;
	cout << "8:" << count8 << endl;
	cout << "9:" << count9 << endl;

}
*/

//Call By Value

/*
#include<iostream>
using namespace std;

void add(int a, int b) {
	cout << a + b << "is the value" << endl;
}

int main() {

	int num = 4;

	add(num,num);
	cout << num;
}
*/

//Call by pointer

#include<iostream>
using namespace std;

int main() {

}