#include<iostream>
using namespace std;

int main() {
    int target;
    cout << "Enter the target: ";
    cin >> target;

    int arr[6] = {1, 2, 4, 6, 18, 25};

    int start = 0, end = 5;

    while (start < end) {
        if (arr[start] + arr[end] == target) {
            cout << "Indices with elements that sum up to target: " << start << " " << end << endl;
            return 0;
        } else if (arr[start] + arr[end] < target)
            start++;
        else
            end--;
    }
    cout << "No pair found that sums up to target." << endl;
    return 0;
}
