#include <iostream>
using namespace std;

int main() {
    char arr[] = {'r', 'o', 'h', 'i', 't'};
    int start = 0, end = sizeof(arr) / sizeof(arr[0]) - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Print the reversed array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i];
    }

    return 0;
}
//method 1 above
//method 2 in 'string 3' with size of string and pallindrome......