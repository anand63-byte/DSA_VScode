#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
#include <string>

using namespace std;

// Function to compute the minimum cost to form the main string
int minCostToFormString(const string& mainString, const unordered_map<string, int>& substrings) {
    int n = mainString.size();

    // dp[i] will store the minimum cost to form the first i characters of the main string
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;  // Cost to form an empty string is 0

    // Iterate over the main string
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            string subStr = mainString.substr(j, i - j);  // Extract substring from j to i
            if (substrings.find(subStr) != substrings.end()) {  // Check if substring is in the map
                int cost = substrings.at(subStr);
                if (dp[j] != INT_MAX) {  // Ensure dp[j] is reachable
                    dp[i] = min(dp[i], dp[j] + cost);  // Update dp[i] with the minimum cost
                }
            }
        }
    }

    return dp[n] == INT_MAX ? -1 : dp[n];  // If dp[n] is INT_MAX, the string cannot be formed
}

int main() {
    // Define the main string
    string mainString = "codevita";

    // Define the substrings and their costs
    unordered_map<string, int> substrings = {
        {"co", 1},
        {"d", 3},
        {"dev", 5},
        {"evi", 8},
        {"ita", 1},
        {"vta", 9},
        {"vit", 6},
        {"odv", 2},
        {"de", 4},
        {"a", 7}
    };

    // Get the minimum cost to form the main string
    int result = minCostToFormString(mainString, substrings);

    // Print the result
    if (result != -1) {
        cout << "Minimum cost to form the main string: " << result << endl;
    } else {
        cout << "The main string cannot be formed with the given substrings." << endl;
    }

    return 0;
}