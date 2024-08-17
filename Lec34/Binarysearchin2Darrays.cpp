#include <iostream>
using namespace std;

int main() {
    int n = 4, m = 5;
    int matrix[4][5] = {
        {2, 6, 10, 14, 18},
        {20, 24, 27, 29, 38},
        {47, 52, 78, 93, 102},
        {110, 120, 130, 140, 150}
    };

    // To find
    int x;
    cout << "Enter the number: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (matrix[i][0] <= x && x <= matrix[i][m-1]) {
            int start = 0, end = m - 1;
            while (start <= end) {
                int mid = (start + end) / 2;
                if (matrix[i][mid] == x) {
                    cout << "Number found at row " << i << " and column " << mid << endl;
                    return 0; // Number found
                } else if (matrix[i][mid] < x) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
    }

    cout << "Number not found" << endl;
    return 0;
}
