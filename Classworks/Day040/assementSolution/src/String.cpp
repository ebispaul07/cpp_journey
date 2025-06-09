#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    string b;
    cin >> b;

    int alen = a.length();
    int blen = b.length();

    cout << alen << " " << blen << endl;

    string c = a + b;
    cout << c << endl;

    char temp = a[0];
    char c0 = b[0];
    a[0] = c0;
    b[0] = temp;

    cout << a << " " << b << endl;

    return 0;
}
