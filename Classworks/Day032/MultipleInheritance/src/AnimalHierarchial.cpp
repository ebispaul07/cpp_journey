#include<iostream>
using namespace std;

class Animal {
public:
	void eat() {
		cout << "Eat" ;
	}
	void walk() {
		cout << "Walk";
	}
	void makeSound() {
		cout << "Make a Sound";
	}
	virtual void soundLike() { //overloading using virtual keyword
		cout << "Animal Sound";
	}
};

class cat :public Animal {
public:
	void dispCat() {
		cout << "Cat" ;
	}
	void soundLike() {
		cout << "<Meow>"; //over ridden by the base class method..
	}
};

class dog :public Animal {
public:
	void dispDog() {
		cout << "Dog" ;
	}
	void soundLike() {
		cout << "Bow!!";
	}
};

int main() {

	Animal* bcPtr = nullptr;



	cat c;
	dog d;

	c.dispCat();
	cout << " can ";
	c.eat();
	cout << " and can  ";
	c.walk();
	cout << " and  ";
	c.makeSound();
	cout << " Like " ;
	c.soundLike();

	cout << endl;
	cout << endl;

	d.dispDog();

	
	cout << " can ";
	d.eat();
	cout << " and can  ";
	d.walk();
	cout << " and  ";
	d.makeSound();
	cout << " Like ";
	d.soundLike();

	cout << endl;
	cout << endl;


	bcPtr = &c;
	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeSound();
	bcPtr->soundLike();

	cout << endl;
	cout << endl;

	bcPtr = &d;
	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeSound();
	bcPtr->soundLike();

	cout << endl;
	
}