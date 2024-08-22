#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    vector<bool> count(256, false);  // Initialize with false
    int first = 0, second = 0, len = 0;

    while (second < s.size()) {
        while (count[s[second]]) {
            count[s[first]] = false;
            first++;
        }
        count[s[second]] = true;
        len = max(len, second - first + 1);
        second++;
    }

    cout << "The length of the longest substring without repeating characters is: " << len << endl;
    return 0;
}
