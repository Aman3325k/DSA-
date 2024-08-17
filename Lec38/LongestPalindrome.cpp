#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s = "YourInputString"; // Replace with your actual input string

    vector<int> lower(26, 0), upper(26, 0);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a')
            lower[s[i] - 'a']++;
        else
            upper[s[i] - 'A']++;
    }

    int count = 0;
    bool odd = false;

    for (int i = 0; i < 26; i++) {
        if (lower[i] % 2 == 0)
            count += lower[i];
        else {
            count += lower[i] - 1;
            odd = true;
        }

        if (upper[i] % 2 == 0)
            count += upper[i];
        else {
            count += upper[i] - 1;
            odd = true;
        }
    }

    if (!odd)
        cout << "The characters can form a palindrome." << endl;
    else
        cout << "The characters cannot form a palindrome." << endl;

    return 0;
}
