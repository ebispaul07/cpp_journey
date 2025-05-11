#include<iostream>
using namespace std;

int main() {
    string str = "hello world";
    int count = 0;

    for (int i = 0;str[i] != '\0';i++) {
        count++;
    }
    cout << count;
}