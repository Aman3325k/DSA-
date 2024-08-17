#include<iostream>
using namespace std;
int main() {

int n , fac = 1 , i;
cout << "Enter the value :";
cin >> n;

for ( i=1 ; i <= n ; i = i + 1){
    fac = fac * i;
}
cout << "The answer is :" <<fac;
}