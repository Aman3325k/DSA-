#include<iostream>
using namespace std;
int main (){

    int arr [5] = {3,45,6,77,43};
     int ans = __INT_MAX__;

     for (int i=0;i<5;i++){
    if (arr[i]<ans){
        ans = arr[i];
    }
    cout << ans ;
    return 0;
     }
}