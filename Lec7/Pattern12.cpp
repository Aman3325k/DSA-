#include<iostream>
using namespace std;
int main(){
    /*
   4 
   4 3 
   4 3 2 
   4 3 2 1 
    */
    int n;
    cout << "Enter the value:";
    cin >> n;
    for ( int i = 1; i <= n; i++){
        for (int j = n ; j >= n-i+1; j = j - 1){
            cout << j << " ";
        }
        cout << endl;
    }
}