#include<iostream>
using namespace std;

class student {
    private:
        string name;
        int age;
        int roll_number;
        string grade;

    public:
        // Setter methods
        void setname(string s) {
            name = s;
        }

        void setage(int a) {
            age = a;
        }

        void setroll_number(int r) {
            roll_number = r;
        }

        void setgrade(string s) {
            grade = s;
        }

        // Getter methods (printing values directly)
        void getname() {
            cout << name << endl;
        }

        void getage() {
            cout << age << endl;
        }

        void getroll_number() {
            cout << roll_number << endl;
        }

        // Secure grade getter with pin
        string get_grade(int pin) {
            if(pin == 123)
                return grade;
            else
                return "Invalid PIN";
        }
};

int main() {
    student s1;
    s1.setname("Aman");
    s1.setage(10);
    s1.setroll_number(21);
    s1.setgrade("A+");
    
    s1.getname();
    s1.getage();
    s1.getroll_number();
    
    // Securely get the grade using a pin
    cout << "Grade: " << s1.get_grade(123) << endl; // correct pin
    cout << "Grade: " << s1.get_grade(456) << endl; // incorrect pin

    return 0;
}

