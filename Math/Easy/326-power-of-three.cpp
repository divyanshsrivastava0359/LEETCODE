// ═══════════════════════════════════════════════════════
// Problem: 326. Power of Three
// Difficulty: Easy
// Topics: Math, Recursion
// Runtime: 0 ms (Beats 100.0%)
// Memory: 8.9 MB (Beats 42.8%)
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
       if (n==1) return true;
       return false;
    } 
};
