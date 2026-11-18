// ═══════════════════════════════════════════════════════
// Problem: 3174. Minimum Number of Changes to Make Binary String Beautiful
// Difficulty: Medium
// Topics: String
// Runtime: 2 ms (Beats 71.2%)
// Memory: 13.6 MB (Beats 75.3%)
// Submitted: Nov 18, 2026
// Link: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int minChanges(string s) {
        int c=0;

        for(int i=0;i<s.length();i+=2){
            if(s[i]!=s[i+1]){
                c++;
            }
        }
        return c;
    }
};
