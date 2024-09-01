#include<iostream>
using namespace std;
int main ()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    //print all the values

    for(int i= 0; i<5;i++)
    cout << ptr[i] << " ";

    //print all the address
    for(int i=0;i<5;i++)
    cout << ptr + i << endl;

    //Arithmetic operation ptr++,ptr--,ptr = ptr + 1

    //print all the values 

    for(int i=0;i<5;i++)
    {
        cout << *ptr << " ";
        ptr ++ ;
    }

    //Addition

    ptr = ptr + 3;
    cout << *ptr << endl;

    ptr = ptr - 2;
    cout << *ptr << endl;

}