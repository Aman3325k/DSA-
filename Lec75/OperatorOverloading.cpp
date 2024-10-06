#include<iostream>
using namespace std;

class Complex {
    private:
        int real, imag;
    
    public:
        // Constructor
        Complex(int r = 0, int i = 0) {
            real = r;
            imag = i;
        }
        
        // Operator overloading for '+'
        Complex operator + (const Complex& obj) {
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }

        // Operator overloading for '-'
        Complex operator - (const Complex& obj) {
            Complex temp;
            temp.real = real - obj.real;
            temp.imag = imag - obj.imag;
            return temp;
        }
        
        // Function to print the complex number
        void print() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(5, 3), c2(2, 4);

    Complex c3 = c1 + c2; // Using the overloaded '+' operator
    Complex c4 = c1 - c2; // Using the overloaded '-' operator
    
    cout << "c1 + c2 = ";
    c3.print();

    cout << "c1 - c2 = ";
    c4.print();

    return 0;
}
