# ═══════════════════════════════════════════════════════
# Problem: 4284. Smallest Stable Index I
# Difficulty: Easy
# Topics: Array, Prefix Sum
# Runtime: 27 ms (Beats 18.5%)
# Memory: 12.4 MB (Beats 60.5%)
# Submitted: Sep 5, 2026
# Link: https://leetcode.com/problems/smallest-stable-index-i/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def firstStableIndex(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        list2 = []
        list3 = []
        
        for i in range(0, len(nums)):
            # Append the actual number to list2 to track the maximum value seen so far
            list2.append(nums[i])
            y = max(list2)
            
            # Find the minimum of the remaining elements from index i to the end
            z = min(nums[i:])
            
            # Calculate the difference and store it
            list3.append(y - z)
            
        for i in range(0, len(list3)):
            if(list3[i] <= k):
                return i
                
        return -1

