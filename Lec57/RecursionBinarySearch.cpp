#include<iostream>
using namespace std;
bool binarysearch(int arr[],int start , int end,int x)
{
    //base case 
    if(start>end)
    return 0;

    int mid = start + (end - start)/2;
    if(arr[mid]==x)
    return 1;
    else if(arr[mid]<x)
    return binarysearch(arr,mid+1,end,x);
    else
    return binarysearch(arr,start,mid-1,x);
}
int main()
{
    int arr[] = {2,4,6,8,10,12};
    int x = 10;
    cout << binarysearch(arr,0,5,x);
}