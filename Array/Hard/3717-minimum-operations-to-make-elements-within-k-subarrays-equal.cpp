// ═══════════════════════════════════════════════════════
// Problem: 3717. Minimum Operations to Make Elements Within K Subarrays Equal
// Difficulty: Hard
// Topics: Array, Hash Table, Math, Dynamic Programming, Sliding Window, Heap (Priority Queue)
// Runtime: 1266 ms (Beats 31.3%)
// Memory: 440.6 MB (Beats 34.4%)
// Submitted: Nov 4, 2026
// Link: https://leetcode.com/problems/minimum-operations-to-make-elements-within-k-subarrays-equal/
// ═══════════════════════════════════════════════════════

#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long minOperations(vector<int>& nums, int x, int k) {
        int n = nums.size();
        const long long INF = 1e16; // A safe representation of infinity to avoid overflow
        
        // Step 1: Precompute the minimum equalization cost for every window of size x
        vector<long long> minOps(n, INF);
        multiset<int> lower, upper;
        long long lowerSum = 0, upperSum = 0;
        
        auto balance = [&]() {
            // Keep lower size equal to upper size or greater by 1
            if (lower.size() > upper.size() + 1) {
                auto it = prev(lower.end());
                int val = *it;
                lowerSum -= val;
                upperSum += val;
                upper.insert(val);
                lower.erase(it);
            } else if (lower.size() < upper.size()) {
                auto it = upper.begin();
                int val = *it;
                upperSum -= val;
                lowerSum += val;
                lower.insert(val);
                upper.erase(it);
            }
        };

        for (int i = 0; i < n; ++i) {
            // Insert current element
            if (lower.empty() || nums[i] <= *lower.rbegin()) {
                lower.insert(nums[i]);
                lowerSum += nums[i];
            } else {
                upper.insert(nums[i]);
                upperSum += nums[i];
            }
            
            // Remove the element that slid out of the window
            if (i >= x) {
                int outNum = nums[i - x];
                auto it = lower.find(outNum);
                if (it != lower.end()) {
                    lowerSum -= outNum;
                    lower.erase(it);
                } else {
                    it = upper.find(outNum);
                    upperSum -= outNum;
                    upper.erase(it);
                }
            }
            
            balance();
            
            // If the first valid window of size x is fully built
            if (i >= x - 1) {
                long long median = *lower.rbegin();
                long long cost = (median * lower.size() - lowerSum) + (upperSum - median * upper.size());
                minOps[i - x + 1] = cost; // Store by window's starting index
            }
        }
        
        // Step 2: Tabulation DP to pick k non-overlapping windows
        // dp[i][j] represents the min operations to choose j windows within the prefix nums[0...i-1]
        vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, INF));
        
        // Base Case: 0 windows chosen requires 0 operations
        for (int i = 0; i <= n; ++i) {
            dp[i][0] = 0;
        }
        
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= k; ++j) {
                // Option 1: Skip the current element at index i-1
                dp[i][j] = dp[i - 1][j];
                
                // Option 2: Pick the size-x window ending at index i-1 (starts at i-x)
                if (i >= x) {
                    long long windowCost = minOps[i - x];
                    if (windowCost != INF && dp[i - x][j - 1] != INF) {
                        dp[i][j] = min(dp[i][j], dp[i - x][j - 1] + windowCost);
                    }
                }
            }
        }
        
        return dp[n][k] == INF ? -1 : dp[n][k];
    }
};

