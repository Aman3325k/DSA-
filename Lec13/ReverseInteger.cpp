#include<iostream>
#include<climits> // Include the header for INT_MAX and INT_MIN
using namespace std;

int main() {
    int n, ans = 0, rem;
    const int MAX = INT_MAX, MIN = INT_MIN; // Define MAX and MIN using INT_MAX and INT_MIN

    cout << "Enter the value: ";
    cin >> n;

    while (n != 0) {
        rem = n % 10;
        n /= 10;

        // Check for overflow and underflow
        if (ans > MAX / 10 || (ans == MAX / 10 && rem > 7)) {
            cout << "Overflow! Result will be incorrect." << endl;
            return 1; // Return an error code to indicate overflow
        }
        if (ans < MIN / 10 || (ans == MIN / 10 && rem < -8)) {
            cout << "Underflow! Result will be incorrect." << endl;
            return 2; // Return an error code to indicate underflow
        }

        ans = ans * 10 + rem;
    }

    cout << "Reversed integer: " << ans << endl;

    return 0;
}
