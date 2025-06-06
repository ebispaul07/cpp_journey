#include <iostream>
#include <string>
#include<set>
using namespace std;

int main() {
    set<string>s;

    string banned1 = "bad";
    string banned2 = "evil";
    string banned3 = "vulgar";

    string word;
    cout << "Enter sentence word by word (type 'end' to stop):" << endl;

    while (cin >> word) {
        if (word == "end") break;

        if (word != banned1 && word != banned2 && word != banned3) {
            cout << word << " ";
        }
    }

    return 0;
}
