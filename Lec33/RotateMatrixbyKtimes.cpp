#include<iostream>
using namespace std;

void rotateMatrix(int matrix[][4], int n, int k) {
    for(int r = 0; r < k; r++) {
        // Reverse each row
        for (int i=0; i<n; i++)
        {
            int start=0, end=n-1;
            while(start<end)
            {
                swap(matrix[i][start],matrix[i][end]);
                start++, end--;
            }
        }

        // Transpose the matrix
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
}

void printMatrix(int matrix[][4], int n) {
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
    int k = 2; // Number of times to rotate

    rotateMatrix(matrix, 4, k);
    printMatrix(matrix, 4);

    return 0;
}
