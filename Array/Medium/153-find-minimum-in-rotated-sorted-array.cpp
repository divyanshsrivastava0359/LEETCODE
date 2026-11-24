// ═══════════════════════════════════════════════════════
// Problem: 153. Find Minimum in Rotated Sorted Array
// Difficulty: Medium
// Topics: Array, Binary Search
// Runtime: N/A (Beats 0.0%)
// Memory: N/A (Beats 0.0%)
// Submitted: Nov 24, 2026
// Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// ═══════════════════════════════════════════════════════

// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         return *min_element(nums.begin(),nums.end());
//     }
// };

class Solution {
public:
    int findMin(vector<int>& nums) {
    int low=0;
    int high=nums.size()-1;

    while(low<high){
        int mid=low+(high-low)/2;

        if(nums[mid]>nums[high]){
             low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return nums[low];
}
};
