#include<iostream>
#include<vector>
#include<string>
using namespace std;

void computeLPSArray(const string& needle, vector<int>& lps) {
    int length = 0;
    int i = 1;
    lps[0] = 0; // lps[0] is always 0

    while (i < needle.size()) {
        if (needle[i] == needle[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int KMPSearch(const string& haystack, const string& needle) {
    if (needle.empty()) return 0;
    int m = needle.size();
    int n = haystack.size();

    vector<int> lps(m, 0);
    computeLPSArray(needle, lps);

    int i = 0; // index for haystack
    int j = 0; // index for needle

    while (i < n) {
        if (needle[j] == haystack[i]) {
            i++;
            j++;
        }

        if (j == m) {
            return i - j;
        } else if (i < n && needle[j] != haystack[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }

    return -1;
}

int main() {
    string haystack = "hello";
    string needle = "ll";

    int result = KMPSearch(haystack, needle);
    if (result != -1) {
        cout << "Pattern found at index " << result << endl;
    } else {
        cout << "Pattern not found" << endl;
    }

    return 0;
}
