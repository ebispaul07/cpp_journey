#include<iostream>
#include"Node.h"
#include"Packet.h"

using namespace std;

Node::Node(Packet* packet) {
	this->Packet = packet;
	this->next = nullptr;
}

void Node::enqueue(Packet* packet) {
	Node* newNode = new Node(packet);
	if (rear == nullptr) {
		front = rear = newNode;
	}
	else {
		rear->next = newNode;
		rear = newNode;
	}
}

void Node:: loadjobs(const string& filename) {
	ifstream file(filename);

	if (!file.is_open()) {
		logger.log(ERROR, "could not open");
		return;
	}

	front = rear = nullptr;

	int id, time, pri;
	while (file >> id >> time >> pri) {
		Packet* packet = new Packet(id, time, pri);
		enqueue(job);
	}
	file.close();
	logger.log(INFO, "job loaded from the file");
}
