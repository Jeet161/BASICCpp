#include <iostream>
using namespace std;

class bankaccount {
protected:
    int balance;

public:
    bankaccount(int b) {
        balance = b;
    }

    // Abstract function
    virtual void withdraw(int amount) = 0;
};

class savingaccount : public bankaccount {
public:
    // Correct constructor
    savingaccount(int b) : bankaccount(b) {}

    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Remaining balance: " << balance << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
};

int main() {
    bankaccount* acc;      // base class pointer
    savingaccount sa(5000);

    acc = &sa;
    acc->withdraw(2000);

    return 0;
}