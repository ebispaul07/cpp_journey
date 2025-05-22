#include<iostream>
#include"student.h"
#include<string>
using namespace std;




int main() {

    Student s1;
    s1.setId(0);
    s1.setName("");
    s1.setMark1(0);
    s1.setMark2(0);
    s1.setMark3(0);
    s1.calculateAverage();
    s1.display();
    s1.getGrade();
    


}