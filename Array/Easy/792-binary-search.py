# ═══════════════════════════════════════════════════════
# Problem: 792. Binary Search
# Difficulty: Easy
# Topics: Array, Binary Search
# Runtime: 0 ms (Beats 100.0%)
# Memory: 13.4 MB (Beats 6.2%)
# Submitted: Sep 2, 2026
# Link: https://leetcode.com/problems/binary-search/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        beg=0
        end=len(nums)-1
        while(beg<=end):
            mid=(beg+end)//2
            if(nums[mid]==target):
                return mid
            elif (nums[mid]>target):
                end=mid-1
            elif(nums[mid]<target):
                beg=mid+1
        return -1
