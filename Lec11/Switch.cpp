#include<Iostream>
using namespace std;
int main(){
    int i;
    cout << "Enter the input:";
    cin >> i;

    switch (i)
    {
    case 1:
    cout << "Mohit" ;
        break;
     case 2:
    cout << "Rohit" ;
        break;

    default :
    cout << "Sohit";
        break;
    }
}