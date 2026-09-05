# ═══════════════════════════════════════════════════════
# Problem: 4285. Smallest Stable Index II
# Difficulty: Medium
# Topics: Array, Prefix Sum
# Runtime: 314 ms (Beats 87.1%)
# Memory: 21.7 MB (Beats 61.3%)
# Submitted: Sep 5, 2026
# Link: https://leetcode.com/problems/smallest-stable-index-ii/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def firstStableIndex(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        list2=[]
        n=len(nums)
        if(n==0):
            return -1
            
        # --- CORRECTION START ---
        # Instead of doing min(nums[i::]) inside the loop, 
        # we calculate the minimums from right-to-left once ahead of time.
        mins_from_right =[0] * n
        mins_from_right[n-1] = nums[n-1]
        for idx in range(n-2, -1, -1):
            mins_from_right[idx] = min(mins_from_right[idx+1], nums[idx])
        # --- CORRECTION END ---

        y = float('-inf')
        for i in range(0,n):
            y = max(y, nums[i])
            
            # CHANGED LINE: Instantly look up the minimum instead of using min(nums[i::])
            z = mins_from_right[i]
            
            if(y-z<=k):
                return i

        return -1 

