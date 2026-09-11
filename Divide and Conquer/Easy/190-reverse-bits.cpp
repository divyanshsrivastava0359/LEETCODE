// ═══════════════════════════════════════════════════════
// Problem: 190. Reverse Bits
// Difficulty: Easy
// Topics: Divide and Conquer, Bit Manipulation
// Runtime: N/A (Beats 0.0%)
// Memory: N/A (Beats 0.0%)
// Submitted: Sep 11, 2026
// Link: https://leetcode.com/problems/reverse-bits/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int reverseBits(int n) {
        int result=0;
        for(int i=0;i<32;i++){ 
            result<<=1;
        
        if(n&1){
            result|=1;  
        }
        n>>=1;
        
    }
    return result;
    }
};
