// ═══════════════════════════════════════════════════════
// Problem: 3702. Maximum Subarray With Equal Products
// Difficulty: Easy
// Topics: Array, Math, Sliding Window, Enumeration, Number Theory
// Runtime: 1 ms (Beats 72.0%)
// Memory: 28 MB (Beats 73.3%)
// Submitted: Nov 24, 2026
// Link: https://leetcode.com/problems/maximum-subarray-with-equal-products/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans=0;
        long long total_lcm=1;
        long long max_val=0;

        for(long long num:nums){
            total_lcm=lcm(total_lcm,num);
            max_val=max(max_val,num);
        }
        long long max_p=total_lcm * max_val;
        

        for(int i=0;i<nums.size();++i){
           long long g=0;
           long long l=1;
            long long prod=1;

            for(int j=i;j<nums.size();++j){
                   prod=prod*nums[j];
                   if(prod>max_p){
                    break;
                   }
                   g=gcd(g,(long long)nums[j]);
                   l=lcm(l,(long long)nums[j]);

                   if(prod==l*g){
                    ans=max(ans,j-i+1);
                   }

            }
        }
        return ans;
    }
};
