# ═══════════════════════════════════════════════════════
# Problem: 4. Median of Two Sorted Arrays
# Difficulty: Hard
# Topics: Array, Binary Search, Divide and Conquer
# Runtime: 11 ms (Beats 8.6%)
# Memory: 12.6 MB (Beats 51.8%)
# Submitted: Sep 2, 2026
# Link: https://leetcode.com/problems/median-of-two-sorted-arrays/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        list1=[]
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        for i in range(0,len(nums1)):
            list1.append(nums1[i])

        for i in range(0,len(nums2)):
            list1.append(nums2[i])

        n=len(list1)
        list1.sort()

        if(n%2!=0):
            return float(list1[n//2])
        else:
            return(list1[(n//2)-1]+list1[n//2])/2.0
    
