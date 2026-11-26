// ═══════════════════════════════════════════════════════
// Problem: 58. Length of Last Word
// Difficulty: Easy
// Topics: String
// Runtime: 0 ms (Beats 100.0%)
// Memory: 8.7 MB (Beats 89.0%)
// Submitted: Nov 26, 2026
// Link: https://leetcode.com/problems/length-of-last-word/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int j=0;
        for(int i=n-1;i>=0;i--){
           if(s[i]==' ' && j>0){
            return j;
           }
           if(s[i]!=' '){
            j++;
           }
        }
        return j;
    }
};
