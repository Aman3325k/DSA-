#include<iostream>
#include<vector>
#include<string>
using namespace std;

void permuteWithRepetition(string str, vector<string> &ans, string &temp, int n) {
    // Base condition: if temp size is equal to n, add it to ans
    if(temp.size() == n) {
        ans.push_back(temp);
        return;
    }

    // Loop through each character of str
    for(int i = 0; i < n; i++) {
        // Add character to the current permutation
        temp.push_back(str[i]);

        // Recur to continue building the permutation (with repetition allowed)
        permuteWithRepetition(str, ans, temp, n);

        // Backtrack: remove the last character from temp
        temp.pop_back();
    }
}

int main() {
    string str = "ABC";
    int n = str.size();  // Size of the string

    vector<string> ans;
    string temp;

    // Call the permutation function
    permuteWithRepetition(str, ans, temp, n);

    // Print all permutations
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
