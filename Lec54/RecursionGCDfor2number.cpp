#include<iostream>
using namespace std;

int gcd(int a, int b) 
{
    // Base case: if b is 0, gcd is a
    if (b == 0)
        return a;

    // Recursive case: gcd(a, b) is gcd(b, a % b)
    return gcd(b, a % b);
}

int main() 
{
    int a = 56, b = 98;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
}
