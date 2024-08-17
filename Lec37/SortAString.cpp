#include <iostream>
#include <vector>
using namespace std;

string sort(string s) {
    vector<int> alpha(26, 0);
    for (int i = 0; i < s.size(); i++) {
        if ('a' <= s[i] && s[i] <= 'z') {
            alpha[s[i] - 'a']++;
        }
    }
    string ans;
    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;
        for (int count = 0; count < alpha[i]; ++count) {
            ans += c;
        }
    }
    return ans;
}

int main() {
    string inputString = "programming";
    string sortedString = sort(inputString);
    cout << "Sorted string: " << sortedString << endl;
    return 0;
}
