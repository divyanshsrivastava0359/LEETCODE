# ═══════════════════════════════════════════════════════
# Problem: 496. Next Greater Element I
# Difficulty: Easy
# Topics: Array, Hash Table, Stack, Monotonic Stack
# Runtime: 39 ms (Beats 17.6%)
# Memory: 12.6 MB (Beats 26.3%)
# Submitted: Sep 29, 2026
# Link: https://leetcode.com/problems/next-greater-element-i/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        list1=[]
        for num in nums1:
            star=nums2.index(num)
            found=False
            for i in range(star+1,len(nums2)):
                if(nums2[i]>num):
                    list1.append(nums2[i])
                    found=True
                    break

            if not found:
                list1.append(-1)
        return list1


            

