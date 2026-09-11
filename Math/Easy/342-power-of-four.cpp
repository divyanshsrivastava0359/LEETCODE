// ═══════════════════════════════════════════════════════
// Problem: 342. Power of Four
// Difficulty: Easy
// Topics: Math, Bit Manipulation, Recursion
// Runtime: 0 ms (Beats 100.0%)
// Memory: 7.8 MB (Beats 48.6%)
// Submitted: Sep 11, 2026
// Link: https://leetcode.com/problems/power-of-four/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;

        while(n%4==0){
            n=n/4;
        }
        if(n==1)return true;
        return false;
    }
};
