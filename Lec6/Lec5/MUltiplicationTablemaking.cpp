#include<iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter the value :";
    cin >> n;

    for (int i = 1 ; i <= 10; i = i + 1){
        cout << " The answer is :" << n * i << endl;
    }
}