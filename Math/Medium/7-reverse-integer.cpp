// ═══════════════════════════════════════════════════════
// Problem: 7. Reverse Integer
// Difficulty: Medium
// Topics: Math
// Runtime: 4 ms (Beats 18.9%)
// Memory: 8.4 MB (Beats 94.9%)
// Submitted: Nov 24, 2026
// Link: https://leetcode.com/problems/reverse-integer/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int reverse(int x) {
        int h=x;
        int rev=0;
        while(h!=0){
            int digit=h%10;
             if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) {
                return 0;
            }
            rev=rev*10+digit;
            h=h/10; 
        }
        return rev;
    }
};
