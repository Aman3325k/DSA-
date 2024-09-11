#include<iostream>
using namespace std;

int countWays(int n) 
{
    // Base cases
    if (n == 0)  // 1 way to stay at the ground (by not climbing)
        return 1;
    if (n == 1)  // Only 1 way to reach the first stair
        return 1;

    // Recursive case: sum of ways to reach (n-1)th and (n-2)th stairs
    return countWays(n - 1) + countWays(n - 2);
}

int main() 
{
    int n = 6;  // Number of stairs
    cout << "Number of ways to reach the " << n << "th stair: " << countWays(n) << endl;
}
