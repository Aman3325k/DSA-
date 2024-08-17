#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int target;
    cout << "Enter the target difference: ";
    cin >> target;

    int arr[6] = {1, 2, 4, 6, 18, 25};
    int n = 6;

    sort(arr, arr + n); // Sort the array

    int start = 0, end = 1;

    while (start < n && end < n) {
        int diff = arr[end] - arr[start];
        if (start != end && diff == target) {
            cout << "Pair found: (" << arr[start] << ", " << arr[end] << ")" << endl;
            // Move both pointers to explore more pairs
            start++;
            end++;
        } else if (diff < target) {
            // Increase the difference by moving end to the right
            end++;
        } else {
            // Decrease the difference by moving start to the right
            start++;
        }
    }

    return 0;
}
