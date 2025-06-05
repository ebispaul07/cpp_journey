#include<iostream>
#include"job.h"
using namespace std;

class Job {
protected:
    int jobID;
    int executionTime;
    int priority;
public:
    Job(int jobID,int executionTime,int priority) {
        this->jobID = jobID;
        this->executionTime = executionTime;
        this->priority = priority;
    }

    void setId(int jobID) {
        this->jobID = jobID;
        this->executionTime = executionTime;
        this->priority = priority;
    }

};

