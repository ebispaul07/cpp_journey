#include<iostream>
#include<fstream>
#include<string>
#include<thread>
#include<mutex>
#include<queue>
#include<vector>
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
        this_thread::sleep_for(chrono::seconds(load));
    }
};

mutex mtx;

class Taskqueue {
protected:
    queue<Task> q;
public:
    void readFile(int cp) {
        Task t;
        ifstream wrfile("f.txt");
        string line;

        if (wrfile.is_open()) {
            getline(wrfile, line); // Skip CPU count line

            while (getline(wrfile, line)) {
                size_t tspac = line.find("T");
                size_t colpos = line.find(":");

                string tnum = line.substr(tspac + 1, colpos - tspac - 1);
                string nstr = line.substr(colpos + 6); // Skip " Load "

                int num = stoi(nstr);
                int tnumb = stoi(tnum);

                t.setTaskID(tnumb);
                t.setLoad(num);
                q.push(t);
            }
        }

        while (!q.empty()) {
            unique_lock<mutex> lock(mtx);
            if (q.empty()) {
                break;
            }
            t = q.front();
            q.pop();
            cout << "CPU-" << cp + 1 << " picked Task T" << t.getTaskID() << " (Load: " << t.getLoad() << ")" << endl;
            lock.unlock();

            t.execute();

            lock.lock();
            cout << "CPU-" << cp + 1 << " finished Task T" << t.getTaskID() << endl;
            lock.unlock();
        }
    }
};

int main() {
    ifstream wrfile("f.txt");
    string line;
    int cpuCount = 0;

    // Read CPU count from file
    if (wrfile.is_open()) {
        getline(wrfile, line);
        size_t collpos = line.find(":");
        string cpunum = line.substr(collpos + 2);
        cpuCount = stoi(cpunum);
    }
    wrfile.close();

    Taskqueue tq;
    vector<thread> threads;

    // Create threads equal to CPU count
    for (int i = 0; i < cpuCount; ++i) {
        threads.emplace_back(&Taskqueue::readFile, &tq, i);
    }

    // Wait for all threads to complete
    for (auto& th : threads) {
        th.join();
    }

    cout << "All tasks completed." << endl;

    return 0;
}