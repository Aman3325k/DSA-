#include<iostream>
using namespace std;
class customer
{
 string name;
 int account_number;
 int balance;

 public:
 //Default customer
 customer()
 {
    name = "Rohit";
    account_number = 5;
    balance = 100;
 }

 //Parameterized Constructor (This is differnt as it requires three parameters to display)
 customer(string a ,int b, int c)
 {
    name = a ;
    account_number = b;
    balance = c;
 }

 // constructor overloading
 customer(string a ,int b)
 {
    name = a;
    balance = b;
    account_number = 0;//To avoid printing the garbage value
 }


//  // Inline constructor

//  customer(string a ,int b , int c): name(a),account_number(b),balance(c)
//  {

//  }
// we can only write once inline or parameterized otherwise it will show error


//Copy constructor
customer(customer &b) 
{
    name = b.name;
    account_number = b.account_number;
    balance = b.balance;
}

 void display()
 {
    cout << name << " " << account_number << " " << balance << endl;
 }

};

int main()
{
 customer A1 ;
 customer A2("Rohit",23,1000);
 customer A3("Aman",2000);
 A1.display();
 A2.display();
 A3.display();
 //another method
 customer A4(A2);
 A4.display();
 //another method just like above 
 customer A5;
 A5=A1;
 A5.display();
}