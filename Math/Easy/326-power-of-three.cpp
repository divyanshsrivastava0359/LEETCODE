// ═══════════════════════════════════════════════════════
// Problem: 326. Power of Three
// Difficulty: Easy
// Topics: Math, Recursion
// Runtime: N/A (Beats 0.0%)
// Memory: N/A (Beats 0.0%)
// Submitted: Sep 11, 2026
// Link: https://leetcode.com/problems/power-of-three/
// ═══════════════════════════════════════════════════════

/*class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        while(n%3==0){
                n=n/3;
            }
       if (n==1) return true;
       return false;
    } 
};*/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        if (pow(3,19) % n == 0)
        return true;
    return false;
    }
};

