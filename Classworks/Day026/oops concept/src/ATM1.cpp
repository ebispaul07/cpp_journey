#include<iostream>
#include"atm3.h"
using namespace std;


int main() {
    ATMAccount a1;

    a1.setBalance(0);
    a1.setAcHolder("");
    a1.deposit();
    a1.withdraw();
    a1.checkBalance();

    

}

/*void menu() {
        int num;
        cout << "Select," << endl;
        cout << "1.Deposit Amount" << endl;
        cout << "2.Withdraw Amount" << endl;
        cout << "3.Check Balance" << endl;
        cout << "4.Exit" << endl;
        cin >> num;
    }
    */

/*#include<iostream>
#include<cstring>
using namespace std;


class ATMAccount {
private:
    int balance;
    string accountHolder;

public:
    void setBalance(int);
    int getBalance();
    void setAcHolder(string);
    int getAcHolder();
    void deposit();
    void withdraw();
    void checkBalance();
};
    void ATMAccount::setBalance(int b) {
        balance = b;
    }
    int ATMAccount::getBalance() {
        return balance;
    }

    void ATMAccount::setAcHolder(string a) {
        accountHolder = a;
    }
    string ATMAccount::getAcHolder() {
        return accountHolder;
    }

   

    void ATMAccount::deposit() {
        balance = 100000;

        int deposit;
        cout << "Deposit Amount: ";
        cin >> deposit;
        balance = balance + deposit;
        cout << "Balance Amount: " << balance << endl;


    }

    void ATMAccount::withdraw() {
        int withdraw;
        cout << "Withdraw Amount: ";
        cin >> withdraw;


        balance = balance - withdraw;
    }

    void ATMAccount::checkBalance() {

        if (balance >= 0) {
            cout << "Balance: " << balance;
        }
        else {
            cout << "sorry!!! Balance is Less than 0" << endl;
        }
    }





int main() {
    ATMAccount a1;

    a1.setBalance(0);
    a1.setAcHolder("");
    a1.deposit();
    a1.withdraw();
    a1.checkBalance();

    


}*/