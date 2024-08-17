#include<iostream>
using namespace std;

void printSpiral(int arr[3][4], int m, int n) {
    int i, k = 0, l = 0;

    while (k < m && l < n) {
        for (i = l; i < n; ++i) {
            cout << arr[k][i] << " ";
        }
        k++;

        for (i = k; i < m; ++i) {
            cout << arr[i][n-1] << " ";
        }
        n--;

        if (k < m) {
            for (i = n-1; i >= l; --i) {
                cout << arr[m-1][i] << " ";
            }
            m--;
        }

        if (l < n) {
            for (i = m-1; i >= k; --i) {
                cout << arr[i][l] << " ";
            }
            l++;
        }
    }
}

int main() {
    int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

    printSpiral(arr, 3, 4);

    return 0;
}