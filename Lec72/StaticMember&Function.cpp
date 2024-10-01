#include<iostream>
using namespace std;

class customer {
    string name;
    int account_number, balance;
    static int total_customer;

public:

    customer(string name, int account_number, int balance) {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;  // Increment total customers in the constructor
    }

    void display() {
        cout << name << " " << account_number << " " << balance << " " << total_customer << endl;
    }

    static void display_total() {
        cout << "Total customers: " << total_customer << endl;
    }
};

int customer::total_customer = 0;

int main() {
    customer A1("Rohit", 1, 1000);
    customer A2("Mohit", 2, 1800);
    customer A3("Mohan", 3, 2000);

    customer::display_total();  // Correct way to call static function

    return 0;
}
