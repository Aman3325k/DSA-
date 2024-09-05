#include<iostream>
using namespace std;

void swapping (int *p1 , int *p2)  //pass by pointer
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    cout << p1 << endl;
    cout << p2 << endl;

    cout << &p1 << endl;
    cout << &p2 << endl;
}
int main()
{
    int num =10;
    int &temp = num;
    cout << temp << endl;
    temp ++;
    cout << num;
    cout << &num << endl;
    cout << &temp << endl; 
}