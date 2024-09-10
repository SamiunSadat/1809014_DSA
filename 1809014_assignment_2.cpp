#include <iostream>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    string accountHolderName;
    double balance;

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
        else cout << "Insufficient balance!" << endl;
    }

    void display() {
        cout << "Acc No: " << accountNumber << ", Name: " << accountHolderName << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount accounts[2];

    for (int i = 0; i < 2; i++) {
        cout << "Enter acc no, name, and balance: ";
        cin >> accounts[i].accountNumber >> accounts[i].accountHolderName >> accounts[i].balance;
    }

    for (int i = 0; i < 2; i++) {
        accounts[i].display();
    }

    accounts[0].deposit(1000);
    accounts[0].withdraw(500);

    cout << "Updated Account 1:" << endl;
    accounts[0].display();

    return 0;
}

