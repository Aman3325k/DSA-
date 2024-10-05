#include <iostream>
using namespace std;

class Human
{
 protected:
    string name;
    int age;

 public:
    void work()
    {
        cout << "I am working \n";
    }
};

class student : public Human
{
    int roll_number, fees;

 public:
    // Constructor to initialize student data
    student(string name, int age, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }
};

// Main function
int main()
{
    student A1("Rohit", 26, 32, 99);  // Object creation with arguments
    A1.work();  // Calling the work function
    return 0;
}
