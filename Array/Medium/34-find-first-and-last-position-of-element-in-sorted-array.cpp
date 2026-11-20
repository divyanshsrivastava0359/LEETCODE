// ═══════════════════════════════════════════════════════
// Problem: 34. Find First and Last Position of Element in Sorted Array
// Difficulty: Medium
// Topics: Array, Binary Search
// Runtime: 0 ms (Beats 100.0%)
// Memory: 17.6 MB (Beats 15.6%)
// Submitted: Nov 20, 2026
// Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstbound( nums,target,true);
        int last=firstbound(nums,target,false);
        return {first,last};
    }
    int firstbound(vector<int>& nums,int target,bool isfirst){
        int bound=-1;
        int left=0;
        int right=nums.size()-1;

        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                bound=mid;
                if(isfirst){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else if(target>nums[mid]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return bound;
    }
};
