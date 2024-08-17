#include<iostream>
using namespace std;
int main() {
//to find the square
    int n;
   cout << " Enter the value :" ;
    cin >> n;
    
    for ( int count = 1; count<=n ; count = count + 1)
    cout << " The square is :" << count * count << endl;
}