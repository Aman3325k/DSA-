#include<iostream>
using namespace std;

// void fun0(int n)
// {
//     cout << "Happy birthday";
// }

// void fun1(int n)
// {
//     cout << n << " days left for birthday\n";
//     fun0(0);
// }

// void fun2(int n)
// {
//     cout << n << " days left for birthday\n";
//     fun1(n-1);
// }

// void fun3(int n)
// {
//     cout << n << " days left for birthday\n";
//     fun2(n-1);
// }

void fun3(int n)
{
    if (n==0)
    {
    cout << "Happy Birthday";
    return;
    }
    cout << n << " days left for birthday\n";
    fun3(n-1);
}



int main()
{
    int n = 5;
    // //iterative approach
    // for(int i=n;i>0;i--)
    // {
    //     cout << i << " days left for birthday\n";
    // }
    // cout << "Happy Birthday\n";

  fun3(3);
  
}