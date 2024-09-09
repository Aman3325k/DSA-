#include<iostream>
using namespace std;

// void print(int num, int n) 
// {
//     //base case 
//     if (num == n) 
//     {
//         cout << num << endl;
//         return; 
//     }

//     cout << num << endl;
//     print(num + 1, n);
// }

// int main() 
// {
//     int n;
//     cin >> n;
//     print(1, n);  // Pass both 1 and n to the print function
// }


//for reverse

void print(int n) 
{
    //base case 
    if (n == 1) 
    {
        cout << 1 << endl;
        return; 
    }

   
    print(n-1);
     cout << n << endl;
}

int main() 
{
    int n;
    cin >> n;
    print( n);  

}        