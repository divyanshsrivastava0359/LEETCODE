// ═══════════════════════════════════════════════════════
// Problem: 231. Power of Two
// Difficulty: Easy
// Topics: Math, Bit Manipulation, Recursion
// Runtime: 0 ms (Beats 100.0%)
// Memory: 7.7 MB (Beats 98.9%)
// Submitted: Sep 11, 2026
// Link: https://leetcode.com/problems/power-of-two/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;

        while(n%2==0){
            n=n/2;
        }
        if(n==1) return true;
        return false;
    }
};
