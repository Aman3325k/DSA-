 #include<iostream>
#include<vector>
using namespace std;

void findWaysToSum(int target, vector<vector<int>> &ans, vector<int> &temp, int start) {
    // Base condition: if target becomes 0, add the current combination to ans
    if(target == 0) {
        ans.push_back(temp);
        return;
    }

    // Loop through integers starting from the current integer (start) to target
    for(int i = start; i <= target; i++) {
        // Add i to the current combination
        temp.push_back(i);

        // Recur to find ways by reducing the target and allowing repetition of the same integer
        findWaysToSum(target - i, ans, temp, i);

        // Backtrack: remove the last added integer
        temp.pop_back();
    }
}

int main() {
    int n = 5;  // Target sum
    vector<vector<int>> ans;
    vector<int> temp;

    // Call the function to find all ways to sum to n
    findWaysToSum(n, ans, temp, 1);

    // Print all the ways to sum to n
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
