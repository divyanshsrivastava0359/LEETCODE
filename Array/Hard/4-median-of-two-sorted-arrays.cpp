// ═══════════════════════════════════════════════════════
// Problem: 4. Median of Two Sorted Arrays
// Difficulty: Hard
// Topics: Array, Binary Search, Divide and Conquer
// Runtime: 0 ms (Beats 100.0%)
// Memory: 96 MB (Beats 9.5%)
// Submitted: Sep 2, 2026
// Link: https://leetcode.com/problems/median-of-two-sorted-arrays/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        float sum=0.0;
        float k;
        for(int i=0;i<nums1.size();i++){
            result.push_back(nums1[i]);

        }
        for(int i=0;i<nums2.size();i++){
            result.push_back(nums2[i]);
        }
         int n=result.size();

         sort(result.begin(),result.end());

        if(n%2!=0){
            return result[n/2];
        }
        else{
            return (result[(n / 2) - 1] + result[n / 2]) / 2.0;
        }
    }
};
