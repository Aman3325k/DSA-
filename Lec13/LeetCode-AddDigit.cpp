#include<iostream>
using namespace std;
int main(){
    int rem,num,ans=0;
while (num > 9){
    while (num!=0){
        rem=num%10;
        num=num/10;
        ans=rem+ans;
    }
    num=ans;
}
return num;
}