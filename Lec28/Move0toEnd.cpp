#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int arr[6] = {0, 1, 0, 0, 0, 1};
    int n = 6; // size of the array

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int start = 0, end = n - 1;

    while (start < end) {
        while (arr[start] == 1 && start < end) {
            // Move start pointer to the right until a zero element is found
            start++;
        }

        while (arr[end] == 0 && start < end) {
            // Move end pointer to the left until a one element is found
            end--;
        }

        if (start < end) {
            // Swap arr[start] and arr[end]
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    // Display the modified array
    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
