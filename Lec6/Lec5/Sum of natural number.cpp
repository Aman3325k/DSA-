#include<iostream>
using namespace std;
int main() {

    int n , i , sum=0;
    cout << "Enter the value :";
    cin >> n;

    for ( i = 1 ; i <= n; i = i + 1) {
        sum = sum + i;
    }
    cout << sum;
}