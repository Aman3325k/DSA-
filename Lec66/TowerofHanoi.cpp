#include<iostream>
using namespace std;

void toh(int n, int source, int helper, int dest) {
    // Base case: when there's only one disk, move it from source to destination
    if (n == 1) {
        cout << "Move disk " << n << " from " << source << " to " << dest << endl;
        return;
    }
    
    // Move (n-1) disks from source to helper using destination as auxiliary
    toh(n-1, source, dest, helper);
    
    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << dest << endl;
    
    // Move (n-1) disks from helper to destination using source as auxiliary
    toh(n-1, helper, source, dest);
}

int main() {
    int n = 3;  // Number of disks
    toh(n, 1, 2, 3);  // 1: source, 2: helper, 3: destination
    return 0;
}
