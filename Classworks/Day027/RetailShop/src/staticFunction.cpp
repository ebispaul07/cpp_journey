#include<iostream>
using namespace std;

class T {
private:
	static int val;
public:
	//T accessing both t1 and t2......
	T() {
		val++;
	}
	void dispaly() {
		cout << "Value of val: " << val << endl;
	}
};
int T::val;//to initialize to run.......


int main() {

	T t1;

	t1.dispaly();


	T t2;

	t2.dispaly();

}