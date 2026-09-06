// ═══════════════════════════════════════════════════════
// Problem: 115. Distinct Subsequences
// Difficulty: Hard
// Topics: String, Dynamic Programming
// Runtime: 7 ms (Beats 96.2%)
// Memory: 9.1 MB (Beats 86.3%)
// Submitted: Sep 7, 2026
// Link: https://leetcode.com/problems/distinct-subsequences/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int numDistinct(std::string s, std::string t) {
        int m = s.length();
        int n = t.length();
        
        // dp[j] stores the number of distinct subsequences for t[0...j-1]
        // We use unsigned long long to prevent integer overflow during calculation
        std::vector<unsigned long long> dp(n + 1, 0);
        
        // Base case: An empty string t can always be formed (1 way)
        dp[0] = 1; 
        
        // Process each character of string s
        for (int i = 1; i <= m; ++i) {
            // Traverse backwards to use values from the previous iteration safely
            for (int j = n; j >= 1; --j) {
                if (s[i - 1] == t[j - 1]) {
                    dp[j] += dp[j - 1]; // Add ways by including and excluding the char
                }
            }
        }
        
        return dp[n];
    }
};

