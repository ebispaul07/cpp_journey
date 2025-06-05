#include<iostream>
using namespace std;

class Animal {
public:
	void make_sound() {
		cout << "Animal makes a sound";
	}
};

class Dog :public Animal {
public:
	void make_sound() {
		cout << "Dog Barkes" << endl;
	}
};

class Cat :public Animal {
public:
	void make_sound() {
		cout << "cat meow"<<endl;
	}
};

int main() {
	Dog Animal1;
	Animal1.make_sound();


	Cat Animal2;
	Animal2.make_sound();
}