#include<iostream>
using namespace std;

void wave (int arr[][4], int row, int col)
{
    for (int j=0; j<col; j++)
    {
        if(j%2 == 0) // Use '==' for comparison, not '='
        {
            for(int i=0; i<row; i++)
                cout<<arr[i][j]<<" ";
        }
        else
        {
            for(int i=row-1; i>=0; i--) // Change 'i>0' to 'i>=0' to include the first element
                cout<<arr[i][j]<<" ";
        }
    }
    cout << endl; // Print a newline character after each wave
}

int main()
{
    // Create 2D array
    int arr1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

    // Wave print
    wave(arr1, 3, 4);

    return 0;
}
  