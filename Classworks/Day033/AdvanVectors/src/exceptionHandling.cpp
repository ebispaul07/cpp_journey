#include<iostream>

using namespace std;

int main() {

	
	string er = "Hello";
	string dbyzer = "Divide by zero occured";
	char* ptr = nullptr;
	int n1 = 10, n2 = 0;
	try {
		/*if(n2==0)
		throw dbyzer;*/
		/*if (ptr == nullptr)
			throw "Memory Alocation failed";*/

		//int* arr = (int*) malloc(sizeof(int) * 9999999);
		int* arr = new int[999999999];
		if (arr == nullptr)
			throw arr;
		

	}
	catch(int e){
		cout << "got an excception e : " <<e<< endl;
	}
	catch (string e) {
		cout << "got an exception e: " << e << endl;
	}
	catch (exception& e) {
		cout << "Error: " << e.what() << endl;
	}
	catch (bad_alloc & e) {
		cout << "Error: " << e.what() << endl;
	}
	catch (...) {
		cout << "def";
	}
}