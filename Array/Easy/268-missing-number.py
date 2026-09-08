# ═══════════════════════════════════════════════════════
# Problem: 268. Missing Number
# Difficulty: Easy
# Topics: Array, Hash Table, Math, Binary Search, Bit Manipulation, Sorting
# Runtime: 2495 ms (Beats 8.9%)
# Memory: 13.4 MB (Beats 37.4%)
# Submitted: Sep 8, 2026
# Link: https://leetcode.com/problems/missing-number/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        for i in range(len(nums)+1):
            if i not in nums:
                return i
