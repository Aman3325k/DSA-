#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool divide(vector<int> arr) {
    int total_sum = 0, prefix = 0, n = arr.size();

    // Calculate the total sum
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }
    // Check if the total sum is even
    if (total_sum % 2 != 0) {
        return false;
    }
    // Check if there exists a prefix sum equal to half of the total sum
    for (int i = 0; i < n; i++) {
        prefix += arr[i];
        if (prefix == total_sum / 2) {
            return true;
        }
    }
    return false;
}


int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    bool canDivide = divide(v);
    if (canDivide) {
        cout << "The array can be divided into two parts with equal sum.\n";
    } else {
        cout << "The array cannot be divided into two parts with equal sum.\n";
    }

    return 0;
}
