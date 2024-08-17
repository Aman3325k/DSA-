#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s;                        // Declare a string 's' to store the input string.
    getline(cin, s);                 // Read the entire line of input, including spaces.
    
    vector<string> ans(10);          // Create a vector 'ans' of size 10 to store parts of the string.
    string temp;                     // Declare a temporary string 'temp' to build individual parts of 's'.
    int count = 0, index = 0;        // Initialize 'count' to 0 to keep track of the number of parts,
                                     // and 'index' to 0 to iterate through the string 's'.
    
    // Loop through the string 's' until the end.
    while (index < s.size()) {
        // If the current character is a space (denoted by ' '), it indicates the end of a part.
        if (s[index] == ' ') {
            int pos = temp[temp.size() - 1] - '0';  // Get the last character of 'temp' as an integer.
            temp.pop_back();                        // Remove the last character from 'temp'.
            ans[pos] = temp;                        // Store the 'temp' string in 'ans' at index 'pos'.
            temp.clear();                           // Clear the 'temp' string for the next part.
            count++;                                // Increment the 'count' of parts.
        } else {
            temp += s[index];  // If not a space, add the current character to 'temp'.
        }
        index++;  // Move to the next character in the string.
    }

    // Process the last part (because it won't be followed by a space).
    if (!temp.empty()) {
        int pos = temp[temp.size() - 1] - '0';  // Get the last character of 'temp' as an integer.
        temp.pop_back();                        // Remove the last character from 'temp'.
        ans[pos] = temp;                        // Store the 'temp' string in 'ans' at index 'pos'.
        count++;                                // Increment the 'count' of parts.
    }

    temp.clear();  // Clear the 'temp' string to prepare for constructing the final result.

    // Combine all parts in 'ans' in the correct order.
    for (int i = 1; i <= count; i++) {
        temp += ans[i];  // Add the part from 'ans' to 'temp'.
        temp += ' ';     // Add a space after each part.
    }

    if (!temp.empty()) {
        temp.pop_back();  // Remove the last space from 'temp'.
    }

    cout << temp << endl;  // Print the final result.

    return 0;  // End of the program.
}
