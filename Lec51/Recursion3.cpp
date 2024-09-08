#include<iostream>
using namespace std;

void print (int n)
{   // Base case
    // if(n==1)
    // {
    //     cout << 1 << endl;
    //     return;
    // }
    // cout << n << endl;
    // print (n-1);
    

    //For even n to 1
    //Base case 
    if(n==2)
    {
        cout << 2 << endl;
        return;
    }
    cout << n << endl;
    print (n-2);
}
int main()
{
//     int n = 5;

//     print (n);
// 

   int n = 10;

   print (n);
}