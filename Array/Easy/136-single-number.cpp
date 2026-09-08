// ═══════════════════════════════════════════════════════
// Problem: 136. Single Number
// Difficulty: Easy
// Topics: Array, Bit Manipulation
// Runtime: 0 ms (Beats 100.0%)
// Memory: 20.8 MB (Beats 24.2%)
// Submitted: Sep 8, 2026
// Link: https://leetcode.com/problems/single-number/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=0;

        for(int num:nums){
            n=n^num;
        }
        return n;
    }
};
