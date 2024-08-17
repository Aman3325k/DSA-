#include<iostream>
using namespace std;
int main () {

/*
a a a a 
b b b b 
c c c c 
d d d d 
*/
/*
  int n;
    cout << "Enter the value:";
    cin >> n;

    for(int row = 1; row <= n ; row = row + 1) {
        char name = 'a' + (row - 1);
        for (int col=1; col <= n; col = col + 1){
            cout << name << " " ;
        }
cout << endl;
    } */

    /*
    a b c d 
    a b c d
    a b c d
    a b c d
    */

    int n;
    cout << "Enter the value :";
    cin >> n;

    for (int i = 1; i <=n; i = i+1){
        for (int j = 1; j <= n; j = j+1){
            char name = 'a'+ j - 1;
            cout << name  << " ";
        }
        cout << endl;
    }
}
