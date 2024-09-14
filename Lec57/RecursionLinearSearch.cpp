#include<iostream>
using namespace std;
bool linearsearch(int arr[],int x,int index,int n)
{
    //base case 
    if (index == n)
    return 0;
    
    if (arr[index] == x)
    return 1;

 
    return linearsearch(arr,x,index+1,n);
}
int main()
{
    int arr[]={2,3,6,7,1,5};
    int x = 17;
    cout << linearsearch(arr,x,0,6) << endl;
}