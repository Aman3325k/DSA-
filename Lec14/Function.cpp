#include<iostream>
using namespace std;

    int sum(int n , int  m){
        
      int ans = m+n;
       return ans;
    }

    int mul ( int n , int m){

        int mul = n*m;
        return mul;
    }
int main (){
    int a , b;
    cout << "Enter the value of A:";
    cin >> a;
    cout << "Enter the value of B:";
    cin >> b;

    cout << "The sum is:" << sum ( a,b);
    cout << endl;
    cout << "The multiply is:" << mul (a,b);
    
}
