// ═══════════════════════════════════════════════════════
// Problem: 342. Power of Four
// Difficulty: Easy
// Topics: Math, Bit Manipulation, Recursion
// Runtime: 0 ms (Beats 100.0%)
// Memory: 7.8 MB (Beats 80.5%)
// Submitted: Sep 11, 2026
// Link: https://leetcode.com/problems/power-of-four/
// ═══════════════════════════════════════════════════════

/*class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        return (1073741824 % n ==0 &&  (n & (n - 1)) == 0);
        /*while(n%4==0){
            n=n/4;
        }
        if(n==1)return true;
        return false;
    }
};*/

/*class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        return (1073741824 % n == 0 && (n & (n - 1)) == 0);
    }
};*/
class Solution {
public:
    bool isPowerOfFour(int n) {
        // 3. Check karein ki 1 active bit sirf odd position par hai ya nahi
        return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555) != 0;
    }
};


