#include<iostream>
using namespace std;
int main(){
    /*
        a 
      a b 
    a b c 
  a b c d 
  
    */

    int n;
    cout << "Enter the input:";
    cin>>n;
    
    for (int i=1; i<=n ; i++){
        for(int j=1; j<=n-i; j++){
            cout << "  ";
        }
        
        for (char name ='a';name<='a'+i-1; name= name +1){
           
            cout << name <<" ";
        }
        cout << endl;
 
    }

}