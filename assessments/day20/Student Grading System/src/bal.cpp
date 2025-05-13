#include <iostream>
using namespace std;


struct Student {
    int id;
    string name;
    int m1;
    int m2;
    int m3;
    float avg;
}b[10];

int main() {
    cout << "Enter Details(id,name,m1,m2,m3,avg5):";
    for (int i = 0;i < 1;i++)
    {
        cin >> b[i].id;
        cin >> b[i].name;
        cin >> b[i].m1;
        cin >> b[i].m2;
        cin >> b[i].m3;
        cin >> b[i].avg;
    }


    for (int i = 0;i < 2;i++)
   {
        cout << "Id"<<b[i].id << endl;
    }




    return 0;
}