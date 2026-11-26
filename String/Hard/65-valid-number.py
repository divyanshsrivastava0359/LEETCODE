# ═══════════════════════════════════════════════════════
# Problem: 65. Valid Number
# Difficulty: Hard
# Topics: String
# Runtime: 2 ms (Beats 62.1%)
# Memory: 12.2 MB (Beats 51.5%)
# Submitted: Nov 26, 2026
# Link: https://leetcode.com/problems/valid-number/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def isNumber(self, s):
        """
        :type s: str
        :rtype: bool
        """
        digit=False
        dot=False
        e=False
        for i,char in enumerate(s):
            if char.isdigit():
                digit=True
            
            elif char in "+-":
                if i>0 and s[i-1] not in "eE":
                    return False

            elif char==".":
                if dot or e:
                    return False
                dot=True
            
            elif char in "eE":
                if e or not digit:
                    return False
                e=True
                digit=False


            else:
                return False

        return digit

