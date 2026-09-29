# ═══════════════════════════════════════════════════════
# Problem: 20. Valid Parentheses
# Difficulty: Easy
# Topics: String, Stack, Bracket Sequences
# Runtime: 217 ms (Beats 6.5%)
# Memory: 12.5 MB (Beats 73.4%)
# Submitted: Sep 29, 2026
# Link: https://leetcode.com/problems/valid-parentheses/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        while "()" in s or "[]" in s or "{}" in s:
            s=s.replace("()","")
            s=s.replace("[]","")
            s=s.replace("{}","")

        return s==""

