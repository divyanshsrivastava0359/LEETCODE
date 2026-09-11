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
        // Step 1: Use bitwise trick to ensure n is strictly greater than 0
        // (n > 0) can be written by checking the sign bit, but standard logic is safest:
        if (n <= 0) return false;
        
        // Step 2: 1162261467 is 3^19. 
        // If n is a power of 3, it will divide this number perfectly (remainder == 0).
        return (1162261467 % n == 0);
    }
};

