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

int main()
{
  // Creating an object of engineer
  engineer eng("Rohit", "CSE");
  eng.showname();
  eng.work();

  cout << endl;

  // Creating an object of youtuber
  youtuber yt("Rohit", 49000);
  yt.showname();
  yt.contentcreator();

  return 0;
}
