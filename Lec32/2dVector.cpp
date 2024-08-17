#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter the value of row and col: ";
    cin >> n >> m;

    vector<vector<int> >matrix(n,vector<int>(m));

    cout << "Enter the elements of the matrix: ";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> matrix[i][j];

    cout << "The matrix you entered is: " << endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout << matrix[i][j] <<" ";
        cout << endl;
    }

    return 0;
}
