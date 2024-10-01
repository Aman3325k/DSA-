#include<iostream>
using namespace std;

class customer {
    string name;
    int account_number, balance;
    
public:
    // Constructor
    customer(string name, int account_number, int balance) {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    // Deposit function
    void deposit(int amount) {
        if (amount > 0)
            balance += amount;
        else
            cout << "Invalid Amount" << endl;
    }

    // Display function to show customer details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    customer A1("Rohit", 1, 1000);
    customer A2("Mohit", 2, 1800);
    customer A3("Mohan", 3, 2000);

    A1.deposit(-500);

    // Display customer details
    A1.display();
    A2.display();
    A3.display();

    return 0;
}
