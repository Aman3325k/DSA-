#include<iostream>
using namespace std;

char convert(char name){
    int ans ;
    ans = name - 'a'+ 'A';
    return ans;
}

int main (){
    char name;
    cout << "Enter the input :" << " ";
    cin >> name;

    cout << convert(name) << endl;
}