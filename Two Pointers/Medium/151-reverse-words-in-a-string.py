# ═══════════════════════════════════════════════════════
# Problem: 151. Reverse Words in a String
# Difficulty: Medium
# Topics: Two Pointers, String
# Runtime: 0 ms (Beats 100.0%)
# Memory: 12.2 MB (Beats 95.9%)
# Submitted: Nov 19, 2026
# Link: https://leetcode.com/problems/reverse-words-in-a-string/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        words=s.split()

        reverse=words[::-1]

        return " ".join(reverse)
            
