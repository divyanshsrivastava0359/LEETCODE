// ═══════════════════════════════════════════════════════
// Problem: 4285. Smallest Stable Index II
// Difficulty: Medium
// Topics: Array, Prefix Sum
// Runtime: 16 ms (Beats 34.4%)
// Memory: 202.4 MB (Beats 96.7%)
// Submitted: Sep 5, 2026
// Link: https://leetcode.com/problems/smallest-stable-index-ii/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int l;
        vector<int>list1(n);
        for(int i=n-1;i>=0;i--){
            if(i==n-1)
            list1[i] = nums[i];
            else{
                 list1[i] = min(nums[i], list1[i + 1]);
            }
         int l= nums[0]; 
        }
        for(int i=0;i<n;i++){
            l = max(l, nums[i]);

            if(l-list1[i]<=k){
            return i;
            }
        }
        return -1;
        }
    };
