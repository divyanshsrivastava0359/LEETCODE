# ═══════════════════════════════════════════════════════
# Problem: 496. Next Greater Element I
# Difficulty: Easy
# Topics: Array, Hash Table, Stack, Monotonic Stack
# Runtime: 39 ms (Beats 17.6%)
# Memory: 12.5 MB (Beats 92.8%)
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
        list1 = []
        
        for num in nums1:
            # 1. Find where the current number sits in nums2
            start_index = nums2.index(num)
            
            # 2. Look at all elements strictly to the right of it
            found = False
            for j in range(start_index + 1, len(nums2)):
                if nums2[j] > num:
                    list1.append(nums2[j])
                    found = True
                    break  # Stop at the very first greater element
            
            # 3. If no greater element was found to the right, append -1
            if not found:
                list1.append(-1)
                
        return list1

