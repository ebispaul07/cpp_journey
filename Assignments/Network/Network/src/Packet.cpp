#include<iostream>
#include"Packet.h"
using namespace std;

/*
int packetID;
	string protocol;
	int size;*/
Packet::Packet(int packetID,string protocol,int size ) {
	this->packetID = packetID;
	this->protocol = protocol;
	this->size = size;
}
