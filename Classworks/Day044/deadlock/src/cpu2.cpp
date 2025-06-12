#include<iostream>
#include<fstream>
#include<string>
#include<thread>
#include<mutex>
#include<queue>
using namespace std;


class Task {
protected:
	int taskID;
	int load;
public:

	void setTaskID(int taskID) {
		this->taskID = taskID;
	}
	int getTaskID() {
		return taskID;
	}
	void setLoad(int load) {
		this->load = load;
	}
	int getLoad() {
		return load;
	}

	void execute() {
		this_thread::sleep_for(chrono::microseconds(load));
	}

};

mutex mtx;

class Taskqueue {
protected:
	queue<Task>q;

public:
	void readFile(int cp) {

		Task t;
		ifstream wrfile("f.txt");

		string line;

		if (wrfile.is_open()) {

			getline(wrfile, line);
			

			while (getline(wrfile, line)) {


				size_t spacpos = line.find(" ");
				size_t colpos = line.find(":");
				size_t dspacpos = line.find("d");
				size_t tspac = line.find("T");

				//string tcmd = line.substr(0);
				string tnum = line.substr(tspac + 1);
				//string command = line.substr(0, dspacpos + 1);
				string nstr = line.substr(dspacpos + 2);

				int num = stoi(nstr);
				int tnumb = stoi(tnum);


				//cout << tnumb << " " << num << endl;
				
				

				t.setTaskID(tnumb);
				t.setLoad(num);


				q.push(t);



			}




		}

		while (!q.empty()) {

			unique_lock<mutex>lock(mtx);

			if (q.empty()) {
				break;
			}
			t = q.front();
			q.pop();
			cout <<"CPU-" << cp + 1 << "\tpicked Task T" << t.getTaskID() << "(Load:" << t.getLoad()<<")" << endl;
			lock.unlock();

			t.execute();

			lock.lock();
			cout <<"CPU-" << cp + 1 << "\t" << "finished task: " << t.getTaskID() << endl;
			cout << endl;
			lock.unlock();

			
		}
	
	}
};


int main() {
	
	
	//tq.readFile(0);
	
	ifstream wrfile("f.txt");
	string line;

	int cpun=0;
	if (wrfile.is_open()) {
		getline(wrfile, line);
		size_t collpos = line.find(":");

		string cpunum = line.substr(collpos + 2);
		 cpun = stoi(cpunum);

		//cout << cpun << endl;
	}
	wrfile.close();
	
	Taskqueue tq;
	vector<thread> threads;

	
	for (int i = 0; i < cpun; ++i) {
		threads.emplace_back(&Taskqueue::readFile, &tq, i);
	}

	
	for (auto& th : threads) {
		th.join();
	}

	cout << "All tasks completed." << endl;
	

}
