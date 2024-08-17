//Method 1

#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    int matrix [4][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    
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

    // Reverse the order of the rows
    for (int i=0; i<n/2; i++)
    {
        for(int j=0; j<n; j++)
        {
            swap(matrix[i][j], matrix[n-i-1][j]);
        }
    }

    // Print the rotated matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Method 2


#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    int matrix [4][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    
    // Swap start and end rows
    for (int i=0; i<n/2; i++)
    {
        for(int j=0; j<n; j++)
        {
            swap(matrix[i][j], matrix[n-i-1][j]);
        }
    }

    // Reverse each column from start to end
    for (int j=0; j<n; j++)
    {
        int start=0, end=n-1;
        while(start<end)
        {
            swap(matrix[start][j],matrix[end][j]);
            start++, end--;
        }
    }

    // Print the rotated matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

