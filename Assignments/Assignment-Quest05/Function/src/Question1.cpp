

#include<iostream>

#include<iostream>
using namespace std;

int fun(int num) {
	if (num== 1) {
		return 0;
	}
	else if(num==2){
		return 1;
	}
	else {
		return fun(num - 1) + fun(num - 2);
	}


}

int main() {
	int num;
	cout << "Enter:";
	cin >> num;

	cout<<fun(num);

}


