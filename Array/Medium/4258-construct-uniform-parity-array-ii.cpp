// ═══════════════════════════════════════════════════════
// Problem: 4258. Construct Uniform Parity Array II
// Difficulty: Medium
// Topics: Array, Math
// Runtime: 0 ms (Beats 100.0%)
// Memory: 165.8 MB (Beats 62.8%)
// Submitted: Sep 3, 2026
// Link: https://leetcode.com/problems/construct-uniform-parity-array-ii/
// ═══════════════════════════════════════════════════════

#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    bool uniformArray(std::vector<int>& nums1) {
        int min_odd = INT_MAX;
        
        // Step 1: Find the smallest odd number in the array
        for (int x : nums1) {
            if (x % 2 != 0) { // check if odd
                min_odd = std::min(min_odd, x);
            }
        }
        
        // Step 2: Validate if even numbers can be converted
        // If min_odd remains INT_MAX, it means there are no odd numbers (all are even -> always true)
        for (int x : nums1) {
            if (x % 2 == 0) { // check if even
                if (min_odd != INT_MAX && x < min_odd) {
                    return false; 
                }
            }
        }
        
        return true;
    }
};

