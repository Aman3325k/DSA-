#include<Iostream>
using namespace std;
int main () {
/*
    int n,i;
    cout << " Enter the value: " ;
    cin >> n;

    for ( i = n ; i >= 1; i = i-1) {
        cout<< i << " ";
    }
    */

   //print from 1 to 100 but the difference is 3

   int n;
   cin >> n;

   for ( int i = 1 ; i <= n ; i = i + 3 ) {
    cout << i << endl;
   }
}