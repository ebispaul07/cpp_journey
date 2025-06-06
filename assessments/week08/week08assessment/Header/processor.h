#pragma once
#ifndef __PROCESSOR__
#define __PROCESSOR__

#include<iostream>
using namespace std;



class Processor {
protected:
	string instr;
	int memSize;
public:
	Processor() {

	}
	Processor(string instr) {
		this->instr = instr;
		this->memSize = memSize;
	}

	void setInstr(string);
	string getInstr();
	void setMemSize(int);
	int getMemSize();
	void storeVtR();
	void storeVtM();
	void storeVrM();
	void storeVtMA();
	

	void fileHandl();


};



#endif // !__PROCESSOR__

