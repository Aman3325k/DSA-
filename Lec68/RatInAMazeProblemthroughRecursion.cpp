#include<iostream>
#include<vector>
using namespace std;

int row[] = {-1, 1, 0, 0};  // Row movement for Up, Down, Left, Right
int col[] = {0, 0, -1, 1};  // Column movement for Up, Down, Left, Right
string dir = "UDLR";        // Direction mapping for Up, Down, Left, Right

// Check if the current cell (i, j) is within bounds and is valid
bool valid(int i, int j, int n) {
    return i >= 0 && j >= 0 && i < n && j < n;
}

// Recursive function to find all possible paths
void total(vector<vector<int>>& matrix, int i, int j, int n, string& path, vector<string>& ans, vector<vector<bool>>& visited) {
    // Base case: If the rat reaches the bottom-right corner
    if (i == n - 1 && j == n - 1) {
        ans.push_back(path);
        return;
    }

    // Mark the current cell as visited
    visited[i][j] = true;

    // Try all four possible directions: Up, Down, Left, Right
    for (int k = 0; k < 4; k++) {
        int newRow = i + row[k];
        int newCol = j + col[k];

        // Check if the new cell is valid and not visited
        if (valid(newRow, newCol, n) && matrix[newRow][newCol] == 1 && !visited[newRow][newCol]) {
            // Append the direction to the current path
            path.push_back(dir[k]);

            // Recur for the next cell
            total(matrix, newRow, newCol, n, path, ans, visited);

            // Backtrack by removing the last direction from the path
            path.pop_back();
        }
    }

    // Unmark the current cell for other paths
    visited[i][j] = false;
}

int main() {
    int n = 4;  // Size of the matrix
    vector<vector<int>> matrix = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    vector<string> ans;  // To store all the valid paths
    vector<vector<bool>> visited(n, vector<bool>(n, false));  // To track visited cells
    string path = "";  // To track the current path

    if (matrix[0][0] == 1 && matrix[n-1][n-1] == 1) {
        total(matrix, 0, 0, n, path, ans, visited);  // Call the recursive function
    }

    // Output all valid paths
    if (ans.empty()) {
        cout << "No path exists" << endl;
    } else {
        for (string p : ans) {
            cout << p << endl;
        }
    }

    return 0;
}
