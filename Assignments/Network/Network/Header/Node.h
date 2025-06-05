#pragma once
#ifndef __NODE__
#define __NODE__
#include<iostream>
using namespace std;

class Node {
public:
	Packet* packet;
	Node* next;

	Node(Packet* job);
};

Node* front = nullptr;
Node* rear = nullptr;

Logger logger;


void enqueue(Packet* );

void loadjobs(const string& );

#endif // !__NODE__

