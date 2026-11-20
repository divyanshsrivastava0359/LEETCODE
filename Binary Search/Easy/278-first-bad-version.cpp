// ═══════════════════════════════════════════════════════
// Problem: 278. First Bad Version
// Difficulty: Easy
// Topics: Binary Search, Interactive
// Runtime: 1 ms (Beats 57.7%)
// Memory: 7.7 MB (Beats 98.9%)
// Submitted: Nov 20, 2026
// Link: https://leetcode.com/problems/first-bad-version/
// ═══════════════════════════════════════════════════════

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1;
        int right=n;

        while(left<=right){
            int mid=left+(right-left)/2;
            if(isBadVersion(mid)){
                right=mid-1;
            }
            else{
                left=mid+1;

            }
        }
        return left; 
    }
};
