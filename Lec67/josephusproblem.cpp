#include<iostream>
using namespace std;

// Recursive function to solve the Josephus problem
int josephus(int n, int k) {
    // Base case: if there's only one person left, that person is the survivor
    if (n == 1)
        return 0;  // The survivor's position when 1 person is left (0-indexed)

    // Recursive case: eliminate one person and solve the problem for the remaining (n-1) people
    return (josephus(n - 1, k) + k) % n;
}

int main() {
    int n = 7;  // Number of people in the circle
    int k = 3;  // Every k-th person is eliminated
    // The result will be in 0-based index, adding 1 for 1-based index (natural counting)
    cout << "The safe position is: " << josephus(n, k) + 1 << endl;
    return 0;
}
