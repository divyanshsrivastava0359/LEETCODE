// ═══════════════════════════════════════════════════════
// Problem: 231. Power of Two
// Difficulty: Easy
// Topics: Math, Bit Manipulation, Recursion
// Runtime: 0 ms (Beats 100.0%)
// Memory: 7.9 MB (Beats 12.7%)
// Submitted: Sep 11, 2026
// Link: https://leetcode.com/problems/power-of-two/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        if(1073741824%n==0)return true;

        while(n%2==0){
            n=n/2;
        }
        if(n==1) return true;
        return false;
    }
};


