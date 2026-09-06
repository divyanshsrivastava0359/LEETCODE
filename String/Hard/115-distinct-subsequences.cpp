// ═══════════════════════════════════════════════════════
// Problem: 115. Distinct Subsequences
// Difficulty: Hard
// Topics: String, Dynamic Programming
// Runtime: 8 ms (Beats 90.6%)
// Memory: 9 MB (Beats 91.4%)
// Submitted: Sep 7, 2026
// Link: https://leetcode.com/problems/distinct-subsequences/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int numDistinct(std::string s, std::string t) {
        int m = s.length();
        int n = t.length();
        std::vector<unsigned long long> dp(n + 1, 0);
        dp[0] = 1; 
        for (int i = 1; i <= m; ++i) {
            for (int j = n; j >= 1; --j) {
                if (s[i - 1] == t[j - 1]) {
                    dp[j] += dp[j - 1];
                }
            }
        }
        
        return dp[n];
    }
};

