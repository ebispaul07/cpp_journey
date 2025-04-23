//Quest-1

//1.Calculating Gross salary
/*
#include<iostream>

using namespace std;

int main() {
	int salary;
	cout << "Enter your Salary :";
	cin >> salary;

	int houseRent = (40/salary)*100;
	int dearness = (20/salary)*100;

	int per = houseRent + dearness;

	int tot = per + salary;

	cout << "Gross:" << tot << endl;
}

*/

//2.cost price

/*
#include<iostream>

using namespace std;

int main() {
	int selPric;
	cout << "Enter Selling Price:";
	cin >> selPric;

	int prof;
	cout << "Enter Profit:";
	cin >> prof;


	int costpric = selPric - prof;

	cout << "Cost Price:" << costpric;
}

*/


//3.Area of circle
/*

#include<iostream>

using namespace std;

int main() {
	const int PI = 3.14;
	int rcircle;
	cout << "Enter radius of the circle:";
	cin >> rcircle;

    float acircle = PI * rcircle * rcircle;

	cout << acircle;
}

*/

//4.swapping two numbers

/*
#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 20;
	cout << "value:" << a << b << endl;
	 a=a+b;
	 b=a-b;
	 a=a-b;
	 
	 cout << "value:" << a << b << endl;
}

*/

//5.percentage of a mark

/*
#include<iostream>
using namespace std;

int main() {
	int maths, english, science, social, tamil;

	cout << "Enter the Mark obtained in Maths:";
	cin >> maths;
	cout << "Enter the Mark obtained in English:";
	cin >> english;
	cout << "Enter the Mark obtained in Science:";
	cin >> science;
	cout << "Enter the Mark obtained in Social:";
	cin >> social;
	cout << "Enter the Mark obtained in Tamil:";
	cin >> tamil;

	int tot= maths+english+science+social+tamil;

	cout << "Aggregate Mark:" << tot << endl;

	float per = tot / 5;

	cout << "Percentage Obtained:" << per << endl;

}

*/

//6.sum of given numbers

/*
#include<iostream>
using namespace std;

int main() {
	int num,sum=0;
	cout << "Enter any Numbers:";
	cin >> num;

	for (int i = 1;num !=0;i++) {
		sum = sum + num % 10;
		num = num / 10;

		
	}
	cout << sum;
	
}
*/

//Quest-2

//1.Printing Series

/*
#include<iostream>

using namespace std;

int main() {
	int n = 1;
	
	for (int i = 1;i <= 10;i++) {
		int num = (n * n) - 1;
		cout << num<<",";
		n++;
	}
	cout << '\b';

}
*/

//2.*25

/*
#include<iostream>

using namespace std;

int main() {
	int num;
	cout << "Enter any number:";
	cin >> num;

	for (int i = 1;i <= (num * num);i++) {
		if (i % 5 == 0) {
			cout << i <<endl;
		}
		else {
			cout << i << "*";
		}
	}
}

*/

//3.ABC Traingle
/*
#include<iostream>
using namespace std;

int main() {

	int num;

	cout << "Enter any Number:";
	cin >> num;

	for (int i = 1;i <= num;i++) {
		for (int j = 1;j <= num - i;j++) {
			cout << " ";
		}
		
	
	for(int k = 1;k <=i;k++) {
		cout << char(k+64);
	}

	for (int l = i-1;l >=1 ;l--) {
		cout << char(l+64);
	}
	cout << endl;
}

}

*/

//Quest-3

//1.rectangle star
/*
#include<iostream>

using namespace std;

int main() {
	int num;
	cout << "enter:";
	cin >> num;

	for (int i = 1;i <= num;i++) {
		for (int j = 1;j <= num;j++) {
			cout << "*";
		}
		cout << endl;
	}
}
*/

//2.Right angle traingle

/*
#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "enter:";
	cin >> num;

	for (int i = 1;i <= num;i++) {
		for (int j = 1;j <= i;j++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = num - 1;i >= 1;i--) {
		for (int j = 1;j <= i;j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;

}

*/

//3.downward traingle
/*
#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter:";
	cin >> num;

	for (int i = num - 1;i >= 1;i--) {
		for (int j = 1;j <= i;j++) {
			cout << "*";
		}
		cout << endl;
	}
}
*/