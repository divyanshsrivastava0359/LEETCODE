// ═══════════════════════════════════════════════════════
// Problem: 190. Reverse Bits
// Difficulty: Easy
// Topics: Divide and Conquer, Bit Manipulation
// Runtime: 2 ms (Beats 36.9%)
// Memory: 8.3 MB (Beats 14.2%)
// Submitted: Sep 11, 2026
// Link: https://leetcode.com/problems/reverse-bits/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int reverseBits(int n) {
        int result=0;
        for(int i=0;i<32;i++){ // 32 int max value in binary
            result<<=1;
        
        if(n&1){
            result|=1; // it shift the value of n and check and with n  
        }
        n>>=1;  // left one value at a time
        
    }
    return result;
    }
};
