#include<iostream>
using namespace std;
int main () {
/*
97 98 99 100 
97 98 99 100 
97 98 99 100 
97 98 99 100 
*/
    int n;
    cout << "Enter the value :";
    cin >> n;

    for (int i = 1; i <=n; i = i+1){
        char name = 'a';
        for (int j = 1; j <= n; j = j+1){
            
            cout << name + j - 1 << " ";
        }
        cout << endl;
    }
}