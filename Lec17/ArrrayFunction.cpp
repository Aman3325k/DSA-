#include<iostream>
using namespace std;

void fun (int a[] , int n){
    for (int i=0;i<n;i++)
    cout << a[i] << " ";
}
int main (){

    int arr[5]={5,3,4,45,43};
    fun(arr,5);

}