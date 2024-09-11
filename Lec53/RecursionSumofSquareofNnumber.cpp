#include<iostream>
using namespace std;

int sumOfSquares(int n) 
{
    // Base case
    if (n == 1)
        return 1;

    return (n * n) + sumOfSquares(n - 1);
}

int main() 
{
    // Sum of squares of first n natural numbers
    int n = 6;
    cout << sumOfSquares(n) << endl;
}
