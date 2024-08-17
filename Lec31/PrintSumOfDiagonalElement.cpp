   #include<iostream>
using namespace std;

// Function to print main diagonal elements
void printDiagonal(int arr[][4], int row, int col) {
    cout << "Main diagonal elements are: ";
    for (int i = 0; i < row && i < col; i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;
}

// Function to calculate and print the sum of main diagonal elements
void sumDiagonal(int arr[][4], int row, int col) {
    int sum = 0;
    for (int i = 0; i < row && i < col; i++) {
        sum += arr[i][i];
    }
    cout << "Sum of main diagonal elements is: " << sum << endl;
}

int main() {
    // Create 2D arrays
    int arr1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int arr2[4][4] = { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}, {12, 13, 14, 15} };

    cout << "For arr1:" << endl;
    printDiagonal(arr1, 3, 4);
    sumDiagonal(arr1, 3, 4);

    cout << "For arr2:" << endl;
    printDiagonal(arr2, 4, 4);
    sumDiagonal(arr2, 4, 4);

    return 0;
}
