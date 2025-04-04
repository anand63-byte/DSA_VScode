#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// Recursive function to calculate maximum money if starting from index 'start'
int robFrom(vector<int>& nums, int start, vector<int>& dp) {
    if (start >= nums.size()) return 0;  // Base case: no more houses to rob
    if (dp[start] != -1) return dp[start]; // Return already computed value

    // Rob this house + call the next house we can rob (i + 2)
    int robCurrent = nums[start] + robFrom(nums, start + 2, dp);
    // Skip this house and rob the next one (i + 1)
    int skipCurrent = robFrom(nums, start + 1, dp);

    // Store and return the maximum amount that can be robbed from this point
    dp[start] = max(robCurrent, skipCurrent);
    return dp[start];
}

// Main function to calculate maximum amount that can be robbed
int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0; // No houses to rob
    if (n == 1) return nums[0]; // Only one house to rob

    vector<int> dp1(n, -1); // DP array for the case starting from the first house
    vector<int> dp2(n, -1); // DP array for the case starting from the second house

    // Calculate max money robbed by considering two cases:
    // 1. Starting from the first house (index 0)
    // 2. Starting from the second house (index 1)
    int maxRobbedCase1 = robFrom(nums, 0, dp1); // Including the first house
    int maxRobbedCase2 = robFrom(nums, 1, dp2); // Skipping the first house

    return max(maxRobbedCase1, maxRobbedCase2); // Return the maximum of both cases
}

// Main function to test the implementation
int main() {
    vector<int> nums = {200, 3, 140, 20, 10}; // Input
    cout << "Maximum amount that can be robbed: " << rob(nums) << endl; // Should output 340
    return 0;
}
