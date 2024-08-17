#include<iostream>
#include<cmath> // Include cmath for pow function
using namespace std;

int countdigit(int n) {
    int count = 0;
    while (n) {
        count++;
        n /= 10; // Fix the loop to count digits correctly
    }
    return count;
}

bool Armstrong(int num, int digit) {
    int n = num, ans = 0, rem;
    while (n) {
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }
    return (ans == num);
}

int main() {
    int num;
    cin >> num;

    // count digit
    int digit = countdigit(num);
    // Armstrong number
    cout << Armstrong(num, digit) << endl;

    return 0; // Add return statement to indicate successful program execution
}
