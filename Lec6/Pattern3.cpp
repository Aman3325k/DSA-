#include<iostream>
using namespace std;
int main() {

/*
4 3 2 1 
4 3 2 1 
4 3 2 1 
4 3 2 1
*/

    int n,i,j;
    cout << "Enter the value:";
    cin >> n;

    for (i = 1; i<=n ; i++){

        for (j=n; j>=1;j=j-1 ){
            cout << j << " ";
        }
     cout << endl;
    }
}