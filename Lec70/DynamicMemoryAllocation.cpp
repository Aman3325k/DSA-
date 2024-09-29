#include<iostream>
using namespace std;
class student 
{
    public:
    string name;
    int age , roll_number;
    string grade;

};
int main()
{
  student *s= new student;
  (*s).name="Rohit";
  (*s).age=10;
  (*s).roll_number=21;
  (*s).grade="A+";

  cout<<s->name<<" ";
  cout<<s->age<<" ";
  cout<<s->roll_number<<" ";
  cout<<s->grade<<" ";
}