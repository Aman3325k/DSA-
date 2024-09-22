#include<iostream>
#include<vector>
#include<string>
using namespace std;

void permute(string str, vector<string> &ans, string &temp, vector<bool> &visited, int n) {
    // Base condition: if temp size is equal to n, add it to ans
    if(temp.size() == n) {
        ans.push_back(temp);
        return;
    }

    // Loop through each character of str
    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            // Mark character as visited
            visited[i] = true;
            // Add character to the current permutation
            temp.push_back(str[i]);

            // Recur to continue building the permutation
            permute(str, ans, temp, visited, n);

            // Backtrack: unmark the visited character and remove from temp
            visited[i] = false;
            temp.pop_back();
        }
    }
}

int main() {
    string str = "ABC";
    int n = str.size();  // Size of the string

    vector<string> ans;
    string temp;
    vector<bool> visited(n, false);

    // Call the permutation function
    permute(str, ans, temp, visited, n);

    // Print all permutations
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
