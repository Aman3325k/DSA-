#include<iostream>
using namespace std;
int main()
{
    char c[] = "Gate2024";
    char *p = c;
    cout <<p+p[3]-p[1];
    cout << endl;
}