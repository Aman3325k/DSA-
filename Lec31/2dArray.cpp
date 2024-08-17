#include<iostream>
using namespace std;
int main ()
{
    //create 2d array
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    //print all the array row wise
    for(int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl; // This will print a newline character after each row.
    }

    return 0; // This line is needed to indicate that the program has run successfully.
}
