#include<iostream>
#include<vector>
using namespace std;

void permut(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited, int n) {
    // Base condition: if temp size is equal to n, add it to ans
    if(temp.size() == n) {
        ans.push_back(temp);
        return;
    }

    // Loop through each element of arr
    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            // Mark element as visited
            visited[i] = true;
            // Add element to the current permutation
            temp.push_back(arr[i]);

            // Recur to continue building the permutation
            permut(arr, ans, temp, visited, n);

            // Backtrack: unmark the visited element and remove from temp
            visited[i] = false;
            temp.pop_back();
        }
    }
}

int main() {
    int arr[] = {1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);  // Size of the array

    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(n, false);

    // Call the permutation function
    permut(arr, ans, temp, visited, n);

    // Print all permutations
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
