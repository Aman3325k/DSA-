#include<iostream>
using namespace std;

// Base class
class person
{
  public:
  string name;

  person(string name)
  {
    this->name = name;
  }

  void showname()
  {
    cout << "My name is " << name << endl;
  }
};

// Derived class 1: Inherits from person
class engineer : public person
{
  public:
  string specialization;

  engineer(string name, string specialization) : person(name)
  {
    this->specialization = specialization;
  }

  void work()
  {
    cout << "I have specialization in " << specialization << endl;
  }
};

// Derived class 2: Inherits from person
class youtuber : public person
{
  public:
  int subscribers;

  youtuber(string name, int subscribers) : person(name)
  {
    this->subscribers = subscribers;
  }

  void contentcreator()
  {
    cout << "I have a subscriber base of " << subscribers << endl;
  }
};

// Derived class: Inherits from both engineer and youtuber (Multiple Inheritance)
class codeteacher : public engineer, public youtuber
{
  public:

  codeteacher(string name, string specialization, int subscribers) 
    : engineer(name, specialization), youtuber(name, subscribers) // No need to initialize 'person' directly
  {
  }

  void showcase()
  {
    engineer::showname();  // Resolving ambiguity for 'showname' by using scope resolution
    work();
    contentcreator();
  }
};

int main()
{
  // Creating an object of codeteacher
  codeteacher A1("Rohit", "CSE", 49000);
  A1.showcase();

  return 0;
}

