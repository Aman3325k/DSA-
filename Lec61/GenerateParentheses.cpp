#include<iostream>
#include<vector>
using namespace std;

void generateParenthesis(int open, int close, string temp, vector<string>& ans) {
    // If no more open and close parentheses left to add, add the current combination
    if (open == 0 && close == 0) {
        ans.push_back(temp);
        return;
    }

    // If we can add an open parenthesis, we do so
    if (open > 0) {
        generateParenthesis(open - 1, close, temp + "(", ans);
    }

    // Only add a closing parenthesis if there are more closing parentheses to balance open ones
    if (close > open) {
        generateParenthesis(open, close - 1, temp + ")", ans);
    }
}

int main() {
    int n = 3;  // Number of pairs of parentheses
    vector<string> ans;
    
    generateParenthesis(n, n, "", ans);  // Start with 'n' open and 'n' close parentheses
    
    for (const string& combination : ans) {
        cout << combination << endl;
    }

    return 0;
}
 