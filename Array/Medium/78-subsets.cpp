// ═══════════════════════════════════════════════════════
// Problem: 78. Subsets
// Difficulty: Medium
// Topics: Array, Backtracking, Bit Manipulation
// Runtime: 3 ms (Beats 25.3%)
// Memory: 12.8 MB (Beats 21.3%)
// Submitted: Nov 14, 2026
// Link: https://leetcode.com/problems/subsets/
// ═══════════════════════════════════════════════════════

class Solution {
public:
   void solve(int i, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
        // Base case: Reached the end of the array
        if (i == nums.size()) {
            result.push_back(current); // Automatically pushes {} when current is empty!
            return;
        }

        // Choice 1: Exclude nums[i]
        solve(i + 1, nums, current, result);

        // Choice 2: Include nums[i]
        current.push_back(nums[i]);
        solve(i + 1, nums, current, result);
        current.pop_back(); // Backtrack
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>current;
        solve(0,nums,current,result);
        return result;    
        }
    
};
