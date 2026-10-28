// ═══════════════════════════════════════════════════════
// Problem: 4205. Minimum XOR Path in a Grid
// Difficulty: Medium
// Topics: Array, Dynamic Programming, Bit Manipulation, Matrix
// Runtime: 100 ms (Beats 97.1%)
// Memory: 40.2 MB (Beats 96.3%)
// Submitted: Oct 28, 2026
// Link: https://leetcode.com/problems/minimum-xor-path-in-a-grid/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();

       vector<bitset<1024>>dp(col);

       for(int r=0 ;r<row;r++){
        for(int c=0;c<col;c++){
            bitset<1024>options;

            if(r==0 && c==0) options.set(0);
            if(r>0) options|=dp[c];
            if(c>0) options|=dp[c-1];

            dp[c].reset();
            for(int i=0;i<1024;i++){
                if(options.test(i)){
                    dp[c].set(i ^ grid[r][c]);
                }
            }
        }
       }

       for(int j=0;j<1024;j++){
        if(dp[col-1].test(j)) return j;
       }

     return 0;

    }
};
