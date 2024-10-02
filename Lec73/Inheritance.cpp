#include <iostream>
using namespace std;

class human
{
private:
    int a; // Private member
protected:
    int b; // Protected member
public:
    int c; // Public member

 
    void fun()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};

int main()
{
    human Rohit; 

    cout << "Public member c: " << Rohit.c << endl;

    return 0;
}
