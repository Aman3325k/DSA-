#include<iostream>
using namespace std;

/*void swap (int &a , int &b){ //pass by reference and when '&' is not there it becomes pass by value

    int c;
    c = a;
    a = b;
    b=c;
}*/
int main (){

    int a , b;
    cout << "Enter the value of a:";
    cin >> a;
    cout <<  "enter the value of b:";
    cin >> b;

    swap (a,b);
    cout << a << " " << b << " ";

}



/*
   
   Extra point ---

   * There are also some stored data of this type of function 
   like

   swap,square root , sum ,mul and etc.

   * This helpful if donot do any function input before int main......



*/