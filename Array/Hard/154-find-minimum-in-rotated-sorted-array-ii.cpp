// ═══════════════════════════════════════════════════════
// Problem: 154. Find Minimum in Rotated Sorted Array II
// Difficulty: Hard
// Topics: Array, Binary Search
// Runtime: 0 ms (Beats 100.0%)
// Memory: 16.2 MB (Beats 17.3%)
// Submitted: Nov 24, 2026
// Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int findMin(vector<int>& nums) {
        return *min_element(nums.begin(),nums.end());
    }
};
