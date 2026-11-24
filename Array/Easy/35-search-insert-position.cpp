// ═══════════════════════════════════════════════════════
// Problem: 35. Search Insert Position
// Difficulty: Easy
// Topics: Array, Binary Search
// Runtime: 0 ms (Beats 100.0%)
// Memory: 13.6 MB (Beats 76.6%)
// Submitted: Nov 20, 2026
// Link: https://leetcode.com/problems/search-insert-position/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int beg=0;
        int end=nums.size()-1;
        int k;

        while(beg<=end){
         int mid=beg+(end-beg)/2;
         if(nums[mid]==target){
            return mid;
         }
         else if(target > nums[mid] &&mid +1 < nums.size() && target<nums[mid+1]){
            k=mid+1;
            return k;
         }
         else if(target>nums[mid]){
            beg=mid+1;
         }
         else{
            end=mid-1;
         }
        }
     return beg;
    }
};
