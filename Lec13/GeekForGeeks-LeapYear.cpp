#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the year:";
    cin >> n;

    if ( n%400 == 0){
        cout << "Leap year";
    }
    else if (n%4 == 0 && n%10 != 0){
        cout <<" Leap year";
    }
    else
    cout << "Not a Leap year";
}