#include<iostream>
using namespace std;

// Function to reverse each row of the matrix
void reverseRows(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        int start = 0;
        int end = col - 1;
        while (start < end) {
            // Swap the elements
            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;
            start++;
            end--;
        }
    }
}

// Function to print the matrix
void printMatrix(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Create 2D arrays
    int arr1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int arr2[4][4] = { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}, {12, 13, 14, 15} };

    cout << "Original arr1:" << endl;
    printMatrix(arr1, 3, 4);

    cout << "Reversed arr1:" << endl;
    reverseRows(arr1, 3, 4);
    printMatrix(arr1, 3, 4);

    cout << "Original arr2:" << endl;
    printMatrix(arr2, 4, 4);

    cout << "Reversed arr2:" << endl;
    reverseRows(arr2, 4, 4);
    printMatrix(arr2, 4, 4);

    return 0;
}
