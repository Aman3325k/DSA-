#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    vector<int> count(256, 0); // Vector to keep track of character counts
    int first = 0, second = 0;
    int len = str.size(); // Initialize the length to the size of the string
    int diff = 0; // To track the number of unique characters

    // Count the number of unique characters in the string
    vector<bool> isUnique(256, false);
    for (char c : str) {
        if (!isUnique[c]) {
            diff++;
            isUnique[c] = true;
        }
    }

    int min_len = len; // To store the minimum length of the substring

    while (second < str.size()) {
        // Expand the window by moving `second`
        while (diff > 0 && second < str.size()) {
            if (count[str[second]] == 0) {
                diff--;
            }
            count[str[second]]++;
            second++;
        }

        // Contract the window by moving `first`
        while (diff == 0) {
            min_len = min(min_len, second - first);
            count[str[first]]--;
            if (count[str[first]] == 0) {
                diff++;
            }
            first++;
        }
    }

    cout << "The length of the smallest substring containing all unique characters is: " << min_len << endl;
    return 0;
}
