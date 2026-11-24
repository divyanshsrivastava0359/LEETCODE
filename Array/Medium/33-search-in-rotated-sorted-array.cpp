// ═══════════════════════════════════════════════════════
// Problem: 33. Search in Rotated Sorted Array
// Difficulty: Medium
// Topics: Array, Binary Search
// Runtime: 0 ms (Beats 100.0%)
// Memory: 15 MB (Beats 84.6%)
// Submitted: Nov 24, 2026
// Link: https://leetcode.com/problems/search-in-rotated-sorted-array/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid] == target) {
                return mid;
            }


            if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<nums[mid]){
                   high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(target>nums[mid] && target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};
