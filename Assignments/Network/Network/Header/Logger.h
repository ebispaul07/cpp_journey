#pragma once
#ifndef __LOGGER__
#include<iostream>
using namespace std;
#define MAX 1000


enum Loglevel {
	INFO,
	DEBUG,
	WARNING,
	ERROR
};

class Logger {
private:
	string logs[MAX];
	int logcount = 0;

public:
	void log(Loglevel , const string& );

	void exportlog(const string& );

};

#endif // !__LOGGER__

