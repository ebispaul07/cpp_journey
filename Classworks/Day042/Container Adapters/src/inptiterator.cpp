#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main() {


	cout << "Enter Any Number And To Stop Press (ctrl+z) : ";

	//Input stream iterator

	istream_iterator<int>init(cin);
	istream_iterator<int>endit;

	vector<int>num(init, endit);

	for (auto x : num) {
		cout << x <<" ";
	}

	//output stream iterator
	ostream_iterator<int>out(cout, " ");
	copy(num.begin(), num.end(), out);

	//print(val, sep = "|", end = "+")
}