// ═══════════════════════════════════════════════════════
// Problem: 153. Find Minimum in Rotated Sorted Array
// Difficulty: Medium
// Topics: Array, Binary Search
// Runtime: 0 ms (Beats 100.0%)
// Memory: 14.2 MB (Beats 6.4%)
// Submitted: Nov 24, 2026
// Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int findMin(vector<int>& nums) {
        return *min_element(nums.begin(),nums.end());
    }
};
