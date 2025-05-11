#include<iostream>
using namespace std;
#define MAX 100

int main() {
    char arr[MAX];

    int size;
    cout << "Enter  number:";
    cin >> size;

    cout << "Enter the array element;";
    for (int i = 0;i < size;i++) {
        cin >> arr[i];
    }

    char temp[MAX];
    int index = 0;

    for (int i = 0;i < size;i++) {
        bool isdupli = false;

        for (int j = 0;j < index;j++) {
            if (arr[i] == temp[j]) {
                isdupli = true;
                break;
            }
        }

        if (!isdupli) {
            temp[index] = arr[i];
            index++;
        }
    }

    temp[index] = '\0';
    cout << temp;
    return 0;

}