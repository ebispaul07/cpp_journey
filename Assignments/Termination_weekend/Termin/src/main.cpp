#include<iostream>
#include<fstream>
#include<chrono>
#include<thread>
#define MAX 1000

using namespace std;

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
	void log(Loglevel level, const string& message) {
		string strlevel;

		switch (level) {
		case INFO:
			strlevel = "[INFO]";
			break;
		case DEBUG:
			strlevel = "[DEBUG]";
		case WARNING:
			strlevel = "[WARNING]";
			break;
		case ERROR:
			strlevel = "[ERROR]";
			break;
		}

		string fullMessage = strlevel + message;
		if (logcount < MAX) {
			logs[logcount++] = fullMessage;
		}
		cout << fullMessage << endl;
	}

	void exportlog(const string & filename) {

		ofstream out(filename);
		out << "[INFO] job chain Execution log" << endl;
		for (int i = 0;i < logcount;i++) {
			out << logs[i] << endl;
		}
		out.close();
		log(INFO, "Log saved to" + filename);

	}

};

class Job {
public:
	int jobId;
	int executionTime;
	int priority;

	Job(int jobId, int executionTime, int priority) {
		this->jobId = jobId;
		this->executionTime = executionTime;
		this->priority = priority;
	}
};

class Node {
public:
	Job* job;
	Node* next;

	Node(Job*job) {
		this->job = job;
		this->next = nullptr;
	}
};

Node* front = nullptr;
Node* rear = nullptr;

Logger logger;


void enqueue(Job* job) {
	Node* newNode = new Node(job);
	if (rear == nullptr) {
		front = rear = newNode;
	}
	else {
		rear->next = newNode;
		rear = newNode;
	}
}

void loadjobs(const string &filename) {
	ifstream file(filename);

	if (!file.is_open()) {
		logger.log(ERROR, "could not open");
		return;
	}

	front = rear = nullptr;

	int id, time, pri;
	while (file >> id >> time >> pri) {
		Job* job = new Job(id, time, pri);
		enqueue(job);
	}
	file.close();
	logger.log(INFO, "job loaded from the file");
}

void fifoScheduling() {
	logger.log(DEBUG, "fiofo Scheduling");
}

void priorityScheduling() {
	logger.log(DEBUG,"Sorting job used by bubble sort");
	if (front == nullptr || front->next = nullptr) {
		return;
	}
	Node* temp = nullptr;

	while (temp!=front->next) {
		Node* curr = front;
		while (curr->next!=temp) {
			if (curr->job->priority < curr->next->job->priority) {
				swap(curr->job, curr->next->job);
			}
			curr = curr->next;
		}
		temp = curr;
	}

	Node* printNode = front;

	while (printNode!=nullptr) {
		logger.log(DEBUG, "job" + to_string(temp->job->jobId)
			+ "priority" + to_string(temp->job->jobId)
			+ "Execution Time" + to_string(temp->job->executionTime));

		temp = temp->next;
	}

}

void executeJobs() {
	if (front == nullptr) {
		logger.log(WARNING, "No Jobs to be executed");
		return;
	}

	int totalTime = 0;
	Node* temp = front;

	while (temp != nullptr) {
		Job* job = temp->job;

		logger.log(DEBUG, "executing Job Id:" + to_string(job->jobId)
			+ "priority" + to_string(job->priority));

		this_thread::sleep_for(chrono::microseconds(job->executionTime));
		totalTime += job->executionTime;
		temp = temp->next;

	}
	logger.log(INFO, "All jobs executed in " + to_string(totalTime) + "ms");



}

int main() {

	while (true) {
		   string in;
			cout << "==== JobChain Scheduler ====" << endl;
			cout << "1. Load jobs from file" << endl;
			cout << "	2. Choose scheduling algorithm" << endl;
			cout<<"	a.FIFO(Job ID)"<<endl;
			cout << "	b.Priority - based" << endl;
			cout << "	3. Execute jobs" << endl;
			cout << "	4. Export log" << endl;
			cout << "	5. Exit" << endl;
			cin >> in;

			switch (in) {
			case "1":
				loadjobs("job.txt");
				break;
			case "2a":
				logger.log(INFO,"Fifo Scheduling");
				break;
			case "2b":
				logger.log(INFO, "priority-based");
				break;
			case "3":
				executeJobs();
				break;
			case"4":
				exportlog("log_job.txt");
				break;
			case "5":
				break;
			default:
				logger.log(ERROR,"Invalid Option");

			}
		
	}

}

