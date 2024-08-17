#include<iostream>
#include<climits> // Include for INT_MIN
using namespace std;

void printcol(int arr[][4], int row, int col) {
    // Column-wise
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // Print a newline after each column
    }
}

void printrowmax(int arr[][4], int row, int col) {
    int index = -1;
    int sum = INT_MIN;

    for (int i = 0; i < row; i++) {
        int total = 0;
        for (int j = 0; j < col; j++)
            total += arr[i][j];

        if (total > sum) {
            sum = total;
            index = i;
        }
    }

    cout << "Row with maximum sum is: " << index << endl;
}

int main() {
    // Create 2D arrays
    int arr1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int arr2[3][4] = { {0, 1, 3, 4}, {6, 7, 10, 11}, {41, 18, 9, 11} };
    
    cout << "Printing columns of arr1:" << endl;
    printcol(arr1, 3, 4);

    cout << "Finding row with maximum sum in arr2:" << endl;
    printrowmax(arr2, 3, 4);

    return 0;
}
