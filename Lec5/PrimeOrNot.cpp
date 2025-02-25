#include<iostream>
using namespace std;
int main () {

    int i , n;
    cout << "Enter the value :";
    cin >> n;

    if (i<2)
     {
        cout << "Not Prime";
        return 0;
    }
    else 
    {
        for (i=2; i<n; i=i+1){

            if (i%n == 0){
                cout << "Not prime";
                return 0;
            }
        }
          cout << "Prime";
       }
       return 0;
}
   