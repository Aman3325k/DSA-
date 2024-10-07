#include<iostream>
#include<stdexcept>  // For std::runtime_error
using namespace std;

// Renaming the custom exception class to avoid conflict with std::runtime_error
class custom_runtime_error : public exception {
    string message;

public:
    // Constructor to initialize the custom error message
    custom_runtime_error(const string& msg) : message(msg) {}

    // Override what() method to return custom message
    const char* what() const noexcept override {
        return message.c_str();
    }
};

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
            throw custom_runtime_error("Amount should be greater than 0");
        }
    }

    // Withdraw
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << amount << " rs is debited successfully\n";
        } else if (amount < 0) {
            throw custom_runtime_error("Amount should be greater than 0");
        } else {
            throw custom_runtime_error("Your balance is low");
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
    catch (const custom_runtime_error& e) {
        cout << "Exception Occurred: " << e.what() << endl;
    }

    return 0;
}

