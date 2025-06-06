#include<iostream>
#include "arithmetic.h"
#include<vector>

using namespace std;



//for arithmetic operations...

void Arithmetic::add(int op1, int op2) {
	int temp1;
	int temp2;

	if (op1 == AX) {
		temp1 = AX;
	}
	else if (op1 == BX) {
		temp1 = BX;
	}
	else if (op1 == CX) {
		temp1 = CX;
	}
	else if (op1 == DX) {
		temp1 = DX;
	}

	if (op2 == AX) {
		temp2 = AX;
	}
	else if (op2 == BX) {
		temp2 = BX;
	}
	else if (op2 == CX) {
		temp2 = CX;
	}
	else if (op2 == DX) {
		temp2 = DX;
	}

	AX = temp1 + temp2;

}



void Arithmetic::sub(int op1,int op2) {

	int temp1;
	int temp2;

	if (op1 == AX) {
		temp1 = AX;
	}
	else if (op1 == BX) {
		temp1 = BX;
	}
	else if (op1 == CX) {
		temp1 = CX;
	}
	else if (op1 == DX) {
		temp1 = DX;
	}

	if (op2 == AX) {
		temp2 = AX;
	}
	else if (op2 == BX) {
		temp2 = BX;
	}
	else if (op2 == CX) {
		temp2 = CX;
	}
	else if (op2 == DX) {
		temp2 = DX;
	}

	AX = temp1 - temp2;

}

void Arithmetic::mul(int op1,int op2) {

	int temp1;
	int temp2;

	if (op1 == AX) {
		temp1 = AX;
	}
	else if (op1 == BX) {
		temp1 = BX;
	}
	else if (op1 == CX) {
		temp1 = CX;
	}
	else if (op1 == DX) {
		temp1 = DX;
	}

	if (op2 == AX) {
		temp2 = AX;
	}
	else if (op2 == BX) {
		temp2 = BX;
	}
	else if (op2 == CX) {
		temp2 = CX;
	}
	else if (op2 == DX) {
		temp2 = DX;
	}

	AX = temp1 * temp2;
}

void Arithmetic::div(int op1,int op2) {
	int temp1;
	int temp2;

	if (op1 == AX) {
		temp1 = AX;
	}
	else if (op1== BX) {
		temp1 = BX;
	}
	else if (op1 == CX) {
		temp1 = CX;
	}
	else if (op1 == DX) {
		temp1 = DX;
	}

	if (op2 == AX) {
		temp2 = AX;
	}
	else if (op2 == BX) {
		temp2 = BX;
	}
	else if (op2 == CX) {
		temp2 = CX;
	}
	else if (op2 == DX) {
		temp2 = DX;
	}

	AX = temp1 / temp2;
}