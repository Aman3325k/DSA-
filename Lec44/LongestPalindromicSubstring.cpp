#include<iostream>
#include<string>
#include<vector>
#include<algorithm> // for reverse function
using namespace std;

int minInsertionsToMakePalindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    int size = str.size();
    str += '$';
    str += rev;

    int n = str.size();
    vector<int> lps(n, 0);

    int pre = 0, suf = 1;

    while (suf < n) {
        if (str[pre] == str[suf]) {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        } else {
            if (pre == 0) {
                suf++;
            } else {
                pre = lps[pre - 1];
            }
        }
    }
    return size - lps[n - 1];
}

int main() {
    string str = "abc";  
    cout << "Minimum insertions to make the string a palindrome: " << minInsertionsToMakePalindrome(str) << endl;
    return 0;
}
