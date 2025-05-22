#include<iostream>
#include"student.h"

#include<string>

using namespace std;


void Student::setId(int i) {
    s_id = i;
}
int Student::getId() {
    return s_id;
}

void Student::setName(string n) {
    name = n;
}
string  Student::getName() {
    return name;
}

void Student::setMark1(int m1) {
    mark1 = m1;
}
int Student::getMark1() {
    return mark1;
}

void Student::setMark2(int m2) {
    mark2 = m2;
}
int Student::getMark2() {
    return mark2;
}

void Student::setMark3(int m3) {
    mark3 = m3;
}
int Student::getMark3() {
    return mark3;
}

void Student::setTotal(int t) {
    total = t;
}
int Student::getTotal() {
    return total;
}

void Student::setAverage(int a) {
    avg = a;
}
int Student::getAverage() {
    return avg;
}


void Student::calculateAverage() {
    cout << "Enter Your ID: ";
    cin >> s_id;
    cout << "Enter Your Name: ";
    cin >> name;
    cout << "Enter Mark for English: ";
    cin >> mark1;
    cout << "Enter Mark for Maths: ";
    cin >> mark2;
    cout << "Enter Mark for Science: ";
    cin >> mark3;


    total = mark1 + mark2 + mark3;

    avg = total / 3;


}



void Student::display() {
    cout << endl;
    cout << "ID: " << s_id << endl;
    cout << "Name: " << name << endl;
    cout << "Mark For English: " << mark1 << endl;
    cout << "Mark For Maths: " << mark2 << endl;
    cout << "Mark For Science: " << mark3 << endl;
    cout << endl;
    cout << "Total marks: " << total << endl;
    cout << endl;
    cout << "Average Score: " << avg << "%" << endl;

}

void Student::getGrade() {
    cout << "Grade: ";
    if (total > 280 && total < 300) {
        cout << "A" << endl;
    }
    else if (total > 250 && total < 280) {
        cout << "B" << endl;
    }
    else {
        cout << "C" << endl;
    }


}