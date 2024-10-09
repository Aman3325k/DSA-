#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main()
{
    vector<int> arr(5);
    cout << "Enter the input: ";
    
    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    // Open the file
    ofstream fout;
    fout.open("zero.txt");  
    
    // Write the array elements to the file
    for(int i = 0; i < 5; i++)
    {
        fout << arr[i] << " ";  
    }
    
    fout.close();

    return 0;
}
