#include<iostream>
using namespace std;
int main(){
    /*
    
* * * * * * * 
  * * * * * 
    * * * 
      * 
    
    */

    int n ,i , j;
    cout << "Enter the input:";
    cin >> n;

    for (i=n;i>=1;i--){
        //space
        for (j=1;j<=n-i;j++)
            cout << "  ";
        //star print
        for (j=1;j<=2*i-1;j++)
            cout << "* ";
        
        cout << endl;
    }
}