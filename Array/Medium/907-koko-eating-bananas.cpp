// ═══════════════════════════════════════════════════════
// Problem: 907. Koko Eating Bananas
// Difficulty: Medium
// Topics: Array, Binary Search
// Runtime: 5 ms (Beats 85.1%)
// Memory: 22.8 MB (Beats 95.5%)
// Submitted: Nov 27, 2026
// Link: https://leetcode.com/problems/koko-eating-bananas/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());

        if(piles.size()==h){
            return high;
        }
        int j=high;

        while(low<=high){
            int mid=low+(high-low)/2;
            long long hours=0;

            for(int p:piles){
                hours+=(p+mid-1)/mid;
            }
            if(hours<=h){
                j=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return j;

    }
};
