#include <iostream>
#include <vector>
using namespace std;

int trapRainWater(const vector<int>& height) {
    int n = height.size();
    if (n <= 2) return 0;

    vector<int> leftMax(n), rightMax(n);
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    int trappedWater = 0;
    for (int i = 0; i < n; i++) {
        trappedWater += min(leftMax[i], rightMax[i]) - height[i];
    }

    return trappedWater;
}

int main() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Maximum water that can be trapped: " << trapRainWater(height) << endl;
    return 0;
}
