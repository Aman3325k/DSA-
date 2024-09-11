#include<iostream>
using namespace std;

int fact(int n)
{
    //Base case 
    if (n==1)
    return 1;
     return n*fact(n-1);
}
int main()
{
    int n ;
    n = 10;
    cout << fact(n);
}