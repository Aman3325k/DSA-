#include<iostream>
using namespace std;

class engineer
{
  public:
  string specialization;

  void work()
  {
    cout << "I have specialization in " << specialization << endl;
  }
};

class youtuber
{
    public:
    int subscribers;

    void contentcreator()
    {
        cout << "I have a subscriber base of " << subscribers << endl;
    }
};

class codeteacher : public engineer , public youtuber
{
    public:
    string name;

    codeteacher(string name , string specialization , int subscribers)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
    }

    void showcase()
    {
        cout << "My name is " << name << endl;
        work();
        contentcreator();
    }
};

int main()
{
 codeteacher A1("Rohit","CSE",49000);
 A1.showcase();
 return 0;
}
