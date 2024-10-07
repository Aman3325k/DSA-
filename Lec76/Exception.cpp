#include<iostream>
using namespace std;

class customer {
    string name;
    int balance, account_number;

public:


    customer(string name, int balance, int account_number) {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // Deposit
    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << amount << " rs is credited successfully\n";
        } else {
            throw "Amount should be greater than 0";
        }
    }

    // Withdraw
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << amount << " rs is debited successfully\n";
        } else if (amount < 0) {
            throw "Amount should be greater than 0";
        } else {
            throw "Your balance is low";
        }
    }
};

int main() {
    customer C1("Rohit", 500, 10);  // Corrected the constructor call
    try {
        C1.deposit(100);
        C1.withdraw(600);  // Changed amount to a valid number within balance
        C1.deposit(100);
    }
    catch (const char* e) {
        cout << "Exception Occurred: " << e << endl;
    }

    return 0;
}
