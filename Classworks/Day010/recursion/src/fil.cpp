

/*
#include<iostream>
using namespace std;

int fun(int num);

int main(){
	int ret = 0;
	ret=fun(5);
	cout << "ret" << ret << endl;
	return 0;
}

int fun(int num) {
	cout << num << endl;

	if (num <= 0) {
		return 1;
	}

	num--;

	fun(num);

}*/

#include<iostream>

using namespace std;

int main() {
	int num;
	cout << "enter:";
	cin >> num;

	int fact = 1;

	for (int i = 1;i <= num;i++) {
		 fact = fact * i;

		cout << fact << endl;
	}
}