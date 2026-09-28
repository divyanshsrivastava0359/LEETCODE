// ═══════════════════════════════════════════════════════
// Problem: 9. Palindrome Number
// Difficulty: Easy
// Topics: Math
// Runtime: 1 ms (Beats 57.0%)
// Memory: 8.6 MB (Beats 64.6%)
// Submitted: Sep 28, 2026
// Link: https://leetcode.com/problems/palindrome-number/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }
        return x == reversedHalf || x == reversedHalf / 10;
    }
};

