
#include<iostream> // header file for input and output stream
#include<new.h>


using namespace std;//it tells the compiler like use my namespace 

int main()//every cpp program begins with this function 

{
	int a ,b;
	cout << "Enter Any Number:";
	cin >> a;

	cout << "Enter any Number";
	cin >> b;
	

	cout << "Hello World" << endl;// for print program use cout and to endline use endl

	cout << fun(a, b) << endl;


	return 0;//for successfull execution of program
}