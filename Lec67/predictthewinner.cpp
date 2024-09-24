#include<iostream>
#include<vector>
using namespace std;

// Helper function to recursively determine the maximum score a player can achieve
int maxScore(vector<int>& nums, int left, int right) {
    // Base case: when there is only one number left
    if (left == right)
        return nums[left];
    
    // Recursively choose from the left or the right end
    int chooseLeft = nums[left] - maxScore(nums, left + 1, right);  // Choose the left end and let the opponent play
    int chooseRight = nums[right] - maxScore(nums, left, right - 1); // Choose the right end and let the opponent play

    // Return the option that maximizes the player's score
    return max(chooseLeft, chooseRight);
}

// Function to determine if Player 1 can win or not
bool PredictTheWinner(vector<int>& nums) {
    // If player 1 can achieve a non-negative score advantage, they can win
    return maxScore(nums, 0, nums.size() - 1) >= 0;
}

int main() {
    vector<int> nums = {1, 5, 2};  // Example input
    if (PredictTheWinner(nums)) {
        cout << "Player 1 can win!" << endl;
    } else {
        cout << "Player 1 cannot win!" << endl;
    }
    return 0;
}
