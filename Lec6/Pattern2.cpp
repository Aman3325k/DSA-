#include<iostream>
using namespace std;
int main () {
    /*
    
 1 2 3 4 5 6 
 1 2 3 4 5 6 
 1 2 3 4 5 6 
 1 2 3 4 5 6 
 1 2 3 4 5 6 
 1 2 3 4 5 6  

*/
    int n;
    cout << " Enter the value:";
    cin >> n;

    for (int i=1; i <=n; i++){
        
        for (int j=1; j<=n; j++){
            
            cout << j << " ";
        }
        cout << endl;
    }
}