//
/*

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter:";
	cin >> num;



	for (int i = num;i>1;i--) {
		//cout << i << endl;

		cout << num << endl;
		num = num / 2;

	}

}

*/



#include<iostream>
using namespace std;

void fun(int num ) {
	if (num == 0) {
		return ;
	}
	if (num>1) {
		cout << num << endl;;
		 fun(num / 2);

	}


}

int main() {
	int num;
	cout << "Enter:";
	cin >> num;

	  fun(num);
}

