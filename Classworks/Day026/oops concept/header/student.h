//#pragma once
#ifndef __STUDENT__
#define __STUDENT__
#include<string>
using namespace std;
class Student {
private:
    int s_id;
    string name;
    int mark1;
    int mark2;
    int mark3;
    int total;
    float avg;


public:
    void setId(int);
    int getId();
    void setName(string);
    string getName();
    void setMark1(int);
    int getMark1();
    void setMark2(int);
    int getMark2();
    void setMark3(int);
    int getMark3();
    void setTotal(int);
    int getTotal();
    void setAverage(int);
    int getAverage();
    void calculateAverage();
    void display();
    void getGrade();
};


#endif // !__STUDENT__
