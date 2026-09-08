# ═══════════════════════════════════════════════════════
# Problem: 136. Single Number
# Difficulty: Easy
# Topics: Array, Bit Manipulation
# Runtime: 6843 ms (Beats 5.0%)
# Memory: 14 MB (Beats 52.9%)
# Submitted: Sep 8, 2026
# Link: https://leetcode.com/problems/single-number/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        list1 = []
        for i in range(len(nums)):
            if nums[i] not in list1 and nums.count(nums[i]) == 1:
                list1.append(nums[i])

        return list1[0]
