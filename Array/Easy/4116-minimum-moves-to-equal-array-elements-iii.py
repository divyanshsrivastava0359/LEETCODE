# ═══════════════════════════════════════════════════════
# Problem: 4116. Minimum Moves to Equal Array Elements III
# Difficulty: Easy
# Topics: Array, Math
# Runtime: 4 ms (Beats 27.0%)
# Memory: 12.1 MB (Beats 94.6%)
# Submitted: Nov 3, 2026
# Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def minMoves(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=max(nums)
        p=0
        # while True:
        #     for i in range(0,len(nums)):
        #         if(nums[i]<n):
        #             nums[i]+=1
        #             p+=1

        #     if(min(nums)==n):
        #         return p

        for i in range(0,len(nums)):
            p+=n-nums[i]

        return p
