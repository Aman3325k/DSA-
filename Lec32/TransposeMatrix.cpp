#include<iostream>
using namespace std;

int main() {
    int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int transpose[4][3];

    // Compute the transpose
    for(int i=0; i<3; ++i)
        for(int j=0; j<4; ++j) {
            transpose[j][i] = arr[i][j];
        }

    // Print the transpose
    cout << "Transpose of the matrix: " << endl;
    for(int i=0; i<4; ++i) {
        for(int j=0; j<3; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

