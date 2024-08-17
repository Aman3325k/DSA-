#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter the input :";
    cin >> n;

    int i=1;

    while (i<=n){
        cout << i * n << endl;
        i++;
    }
}