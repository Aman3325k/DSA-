#include<iostream>
using namespace std;
int main (){

    int num ;
    cout << "Enter the input:";
    cin >> num;

    int rem,mul=1,ans=0;

    while (num>0){
        //reminder
        rem=num%10;
        //quotient
        num/=10;
        //ans
        ans=rem*mul+ans;
        //mul
        mul*=2;
    }
    cout << ans << endl;
}