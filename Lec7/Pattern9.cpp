#include<iostream>
using namespace std;
int main (){
    /*
    a
    b b
    c c c
    d d d d
    */
    int n;
    cout << "Enter the value:";
    cin >> n;

    for (int i=1;i<=n;i++){
        char name = 'a'+i-1;
        for (int j=1; j<=i ; j++){
            cout << name << " ";
        }
        cout << endl;
    }
}