#include<iostream>
using namespace std;
int main() {

    /*
    1 2 3 4 
    5 6 7 8 
    9 10 11 12 
    413 14 15 16 
    */
    int n;
    cout << "Enter the value:";
    cin >> n;

    int count=1;
    for (int i = 1; i <=n; i++){
        for (int j = 1 ; j<=n; j++){
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }
}