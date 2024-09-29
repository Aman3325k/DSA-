#include<iostream>
using namespace std;

class customer
{
   string name;
   int *data;

   public:
   
   //Default constructor
   customer()
   {
     name = "4";
     cout << "Constructor is called " << name << endl;
   }

   customer(string name)
   {
    this->name= name;
    cout << "constructor is called " << name << endl;
   }

   //Destructor
   ~customer()
   {
    cout << "Destructor is called "<< name << endl;
   }
};
int main()
{
    customer A1("1"),A2("2"),A3("3");
    customer *A4 = new customer;
    delete A4;
}