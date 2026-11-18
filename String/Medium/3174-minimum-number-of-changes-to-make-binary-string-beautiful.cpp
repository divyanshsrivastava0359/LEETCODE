// ═══════════════════════════════════════════════════════
// Problem: 3174. Minimum Number of Changes to Make Binary String Beautiful
// Difficulty: Medium
// Topics: String
// Runtime: 4 ms (Beats 32.4%)
// Memory: 13.8 MB (Beats 5.1%)
// Submitted: Nov 18, 2026
// Link: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int minChanges(string s) {
        int changes=0;

        for(int i=0;i<s.length();i+=2){
            if(s[i]!=s[i+1]){
                changes++;
            }
        }
        return changes;
    }
};
