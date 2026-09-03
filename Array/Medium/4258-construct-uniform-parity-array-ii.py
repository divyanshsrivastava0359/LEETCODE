# ═══════════════════════════════════════════════════════
# Problem: 4258. Construct Uniform Parity Array II
# Difficulty: Medium
# Topics: Array, Math
# Runtime: 135 ms (Beats 30.8%)
# Memory: 21.8 MB (Beats 23.1%)
# Submitted: Sep 3, 2026
# Link: https://leetcode.com/problems/construct-uniform-parity-array-ii/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def uniformArray(self, nums1):
        """
        :type nums1: List[int]
        :rtype: bool
        """
        list1=[]
        list2=[]
        for i in nums1:
            if(i%2!=0):
                list1.append(i)
        
        if (list1==[]):
            return True
        y= min(list1)


        for i in nums1:
            if(i%2==0):
                list2.append(i)

        if(list2==[]):
            return True
        h=min(list2)
        if(h<y):
            k=h-y
            if(k<0):
                return False

        return True
    
