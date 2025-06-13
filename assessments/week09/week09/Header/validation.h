#pragma once
#ifndef __VALIDATION__
#define __VALIDATION__

#include<iostream>

using namespace std;

class Validation {
protected:
	string userName;
	string password;
public:
	Validation() {};

	void setUname(string);
	string getUname();
	void setPassword(string);
	string getPassword();

	void signUp();

	void applicationMenu();
	

	void logIn();

};


#endif // !__VALIDATION__

