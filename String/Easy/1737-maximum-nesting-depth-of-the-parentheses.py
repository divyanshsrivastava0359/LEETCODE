# ═══════════════════════════════════════════════════════
# Problem: 1737. Maximum Nesting Depth of the Parentheses
# Difficulty: Easy
# Topics: String, Stack, Bracket Sequences
# Runtime: 0 ms (Beats 100.0%)
# Memory: 12.3 MB (Beats 59.0%)
# Submitted: Sep 28, 2026
# Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def maxDepth(self, s):
        """
        :type s: str
        :rtype: int
        """
        current_value=0
        max_value=0
        for i in s:
            if (i=="("):
                current_value+=1
                if(current_value>max_value):
                    max_value+=1
            if(i==")"):
                current_value-=1
        return max_value
        
