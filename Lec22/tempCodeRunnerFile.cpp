#include<iostream>
using namespace std;
int binarySearch (int arr[],int n, int key){
    //start , end , mid
    int start=0, end = n-1, mid;

    while(start <= end){

        //mid find karo
        mid=(start+end)/2;

        //arr[mid]==key
        if(arr[mid]==key)
        return mid;

        //arr[mid]<key
        else if(arr[mid]<key)
        start = mid + 1;

        //arr[mid]>key
        else
        end= mid-1;

    }
    return - 1;
}
int main (){
    int arr[1000];
    int n;
    cout << "Enter the array :";
    cin >> n;

    cout <<"Enter the value :";
    for (int i=0;i<n;i++)
        cin >> arr[i];
    
    int key;
    cout << "Enter the Key :";
    cin >> key;

    cout << binarySearch(arr, n, key) << endl;

    return 0;
}