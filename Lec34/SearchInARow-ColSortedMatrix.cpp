#include <iostream>
using namespace std;

int main() {
    int n = 5, m = 5;
    int matrix[5][5] = {
        {4, 8, 15, 25, 60},
        {18, 22, 26, 42, 80},
        {36, 40, 45, 68, 104},
        {48, 50, 72, 83, 130},
        {70, 99, 114, 128, 170}
    };

    // To find
    int x;
    cout << "Enter the number: ";
    cin >> x;

    int i = 0, j = m - 1;
    while (i < n && j >= 0) {
        if (matrix[i][j] == x) {
            cout << "Number found at position (" << i << ", " << j << ")" << endl;
            return 0;
        } else if (matrix[i][j] < x) {
            i++;
        } else {
            j--;
        }
    }

    cout << "Number not found" << endl;
    return 0;
}
