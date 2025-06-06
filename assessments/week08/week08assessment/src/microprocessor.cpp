#include<iostream>
#include<fstream>
#include"processor.h"
#include"arithmetic.h"
using namespace std;

int main() {


	Processor p;
	Arithmetic a;
	//a.add(1,1);
	

	p.fileHandl();
	p.storeVtR();
	p.storeVrM();
	p.storeVtM();
	p.storeVtMA();
	
	
}