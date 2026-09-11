// ═══════════════════════════════════════════════════════
// Problem: 326. Power of Three
// Difficulty: Easy
// Topics: Math, Recursion
// Runtime: 2 ms (Beats 65.8%)
// Memory: 8.8 MB (Beats 74.7%)
// Submitted: Sep 11, 2026
// Link: https://leetcode.com/problems/power-of-three/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        while(n%3==0){
                n=n/3;
            }
        return n==1;
    } 
};
