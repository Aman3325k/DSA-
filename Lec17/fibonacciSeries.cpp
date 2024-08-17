#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the input: ";
    cin >> n;

    int arr[1000];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }

    if (n == 1) {
        cout << arr[0] << endl;  // Handle the case where n is 1
    } else {
        cout << arr[n-1] << endl;  // Print the n-th Fibonacci number
    }

    return 0;  // Return 0 to indicate successful execution
}
