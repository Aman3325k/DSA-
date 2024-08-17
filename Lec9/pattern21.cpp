#include<iostream>
using namespace std;
int main(){
    /*
    
Enter the value :5

* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
    
    */

    int n,i,j;
    cout << "Enter the value :";
    cin>>n;

    for (i=n;i>=1;i--){

        //print  *
        for (j=1;j<=i;j++)
        cout << "* ";

        // print space
       for (j=1;j<=2*n-2*i;j++)
       cout << "  ";

        //print *
        for (j=1;j<=i;j++)
        cout << "* ";

        cout<<endl;
    }
    
    
    for (i=1;i<=n;i++){

        //print  *
        for (j=1;j<=i;j++)
        cout << "* ";

        // print space
       for (j=1;j<=2*n-2*i;j++)
       cout << "  ";

        //print *
        for (j=1;j<=i;j++)
        cout << "* ";

        cout<<endl;
}

}