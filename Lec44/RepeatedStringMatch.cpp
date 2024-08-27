#include<iostream>
#include<string>
#include<vector>
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
            return 1; // Match found
        } else if (i < n && needle[j] != haystack[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }

    return -1; // Match not found
}

int repeatedStringMatch(string a, string b) {
    if (a == b) return 1;

    int repeat = 1;
    string temp = a;

    while (temp.size() < b.size()) {
        temp += a;
        repeat++;
    }

    // KMP pattern search
    if (KMPSearch(temp, b) == 1)
        return repeat;

    // temp + a, KMP search
    if (KMPSearch(temp + a, b) == 1)
        return repeat + 1;

    return -1;
}

int main() {
    string a = "abcd";
    string b = "cdabcdab";

    int result = repeatedStringMatch(a, b);
    cout << "Minimum repetitions: " << result << endl;

    return 0;
}
