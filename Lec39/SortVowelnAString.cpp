#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;  // Initialize the input string (don't forget to provide an actual value for 's')

    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    for (int i = 0; i < s.size(); i++) {
        // Lowercase vowels: a, e, i, o, u
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            lower[s[i] - 'a']++;
            s[i] = '#';
        }
        // Uppercase vowels: A, E, I, O, U
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
    }

    string vowel;
    // Add uppercase vowels
    for (int i = 0; i < 26; i++) {
        char c = 'A' + i;
        while (upper[i]) {
            vowel += c;
            upper[i]--;
        }
    }

    // Add lowercase vowels
    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;
        while (lower[i]) {
            vowel += c;
            lower[i]--;
        }
    }

    int first = 0, second = 0;

    while (second < vowel.size()) {
        if (s[first] == '#') {
            s[first] = vowel[second];
            second++;
        }
        first++;
    }

    cout << s << endl;  // Print the modified string

    return 0;
}
