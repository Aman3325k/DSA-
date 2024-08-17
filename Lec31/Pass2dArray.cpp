#include<iostream>
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

int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    int x = 7;

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            if (arr[row][col] == x) {
                cout << "yes";
                return 0;
            }
        }
    }
    cout << "no";

    return 0;
}
