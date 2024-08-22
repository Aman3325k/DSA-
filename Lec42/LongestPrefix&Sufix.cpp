#include <iostream>
#include <vector>
using namespace std;

int longestPrefixSuffix(const string &s) {
    vector<int> lps(s.size(), 0);
    int pre = 0, suf = 1;

    while (suf < s.size()) {
        if (s[pre] == s[suf]) {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        } else {
            if (pre != 0) {
                pre = lps[pre - 1];
            } else {
                lps[suf] = 0;
                suf++;
            }
        }
    }
    return lps[s.size() - 1];
}

int main() {
    string s = "ababcabab"; // Example string
    cout << "Length of the longest prefix which is also a suffix: " << longestPrefixSuffix(s) << endl;
    return 0;
}
