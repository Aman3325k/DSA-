#include <iostream>
#include <vector>
using namespace std;

// Function to add two strings representing non-negative integers
string add(string num1, string num2) {
    string ans;
    int index1 = num1.size() - 1, index2 = num2.size() - 1;
    int sum, carry = 0;

    // While both strings have digits left
    while (index1 >= 0 || index2 >= 0) {
        // Calculate the sum of digits from both strings and any carry from the previous step
        sum = carry;
        if (index1 >= 0)
            sum += (num1[index1] - '0');
        if (index2 >= 0)
            sum += (num2[index2] - '0');

        // Update carry and append the current digit to the answer
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;

        // Move to the next position in both strings
        if (index1 >= 0)
            index1--;
        if (index2 >= 0)
            index2--;
    }

    // If there's a carry left after processing all digits
    if (carry)
        ans += (carry + '0');  // Corrected to add carry properly

    // Reverse the answer to get the correct order
    reverse(ans.begin(), ans.end());

    return ans;
}

// Function to add two strings (handles different lengths)
string addStrings(string num1, string num2) {
    if (num1.size() < num2.size())
        return add(num2, num1);  // Swap if num1 is shorter
    else
        return add(num1, num2);
}

int main() {
    string num1 = "123";  // Example input
    string num2 = "456";  // Example input

    string result = addStrings(num1, num2);
    cout << "Sum: " << result << endl;

    return 0;
}
