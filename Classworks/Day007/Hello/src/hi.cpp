#include<iostream>

using namespace std;

int main() {

	/*int n, i = 0;
	cin >> n;
	
	while (n==10) {

		i = i + 3;
			n = n + 1;
			cout << i << ",";

			i = i + 5;
			cout << i << ",";

			i = i + 7;
			cout << i << ",";

			i = i + 11;
			cout << i << ",";

			i = i + 13;
			cout << i << ",";
			

			i = i + 17;
			cout << i << ",";

			i = i + 19;
			cout << i << ",";

			i = i + 23;
			cout << i << ",";
			

	 }

	 */
	

	/*int it1, n;

	cout << "Enter:";
	cin >> n;

	it1 = 1;

	while (it1<n) {
		cout << (it1*it1)-1<<",";
		it1++;
	}

	cout << (it1 * it1) - 1 << endl;

	return 0;

	*/

/*
	int N;
	cout << "Enter:";
	cin >> N;

	for (int i = 1;i <= N * N;i++) {
		if (i%5==0) {
			cout <<i << endl;
		}else
		{
			cout << i << "*";
		}
	}

	*/

	for (int i = 1;i <= 10;i++) {
		int val = (i * i) - 1;
		cout << val<<",";
	}

	cout << "\b";

	
	
	




}