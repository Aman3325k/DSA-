#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // Dynamically allocate a 2D array
    int **ptr = new int*[n];
    for(int i = 0; i < n; i++)
    {
        ptr[i] = new int[m];
    }

    // Input the values for the 2D array
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> ptr[i][j];
        }
    }

    // Print the 2D array
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    // Release the allocated memory
    for(int i = 0; i < n; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}
