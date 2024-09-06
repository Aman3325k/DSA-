#include<iostream>
using namespace std;
int main()
{
    int n = 10;
    int *p = &n; //single pointer
    int **p2 = &p; //Double pointer
    int ***p3 = &p2; //Triple pointer
   // cout << p << endl;
   // cout << &p << endl;
   // cout << p2 << endl;
   // cout << &p2 << endl;
    //cout << p3 << endl;

    ***p3 = ***p3 + 10;
    cout << n << endl;

}
