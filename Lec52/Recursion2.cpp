#include<iostream>
using namespace std;

// void printeven(int num, int n) 
// {
//     if (num > n) 
//     {
//         return; 
//     }

//     cout << num << " ";
//     printeven(num + 2, n); 
// }

// int main() 
// {
//     // Print even numbers from 1 to n
//     int n;
//     cin >> n;
    
//     if (n % 2 == 1) 
//         n--; // If n is odd, reduce it by 1 to make it even

//     printeven(2, n); // Call printeven to print even numbers starting from 2
// }


//for reverse
void printeven( int n) 
{
    if (n==2) 
    {
        cout << 2 << endl;
        return;
    }

   
    printeven(n-2); 
     cout << n<< " ";
}

int main() 
{
    // Print even numbers from 1 to n
    int n;
    cin >> n;
    
    if (n % 2 == 1) 
        n--; 1
    printeven( n); 
}
