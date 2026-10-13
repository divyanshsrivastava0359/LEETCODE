// ═══════════════════════════════════════════════════════
// Problem: 315. Count of Smaller Numbers After Self
// Difficulty: Hard
// Topics: Array, Binary Search, Divide and Conquer, Binary Indexed Tree, Segment Tree, Merge Sort, Ordered Set, Treap
// Runtime: 339 ms (Beats 58.7%)
// Memory: 199.7 MB (Beats 54.5%)
// Submitted: Oct 13, 2026
// Link: https://leetcode.com/problems/count-of-smaller-numbers-after-self/
// ═══════════════════════════════════════════════════════

// class Solution {
// public:
//     vector<int> countSmaller(vector<int>& nums) {
//         vector<int>list;
//         int j=0;
//         if(nums.size()==1){
//             list.push_back(0);
//             return list;
//         }
//         for(int i=0;i<nums.size();i++){
//             int count=0;
//             for(int k=i+1;k<nums.size();k++){
//                 if(nums[i]>nums[k]){
//                     count++;
//                 }
//             }
//             list.push_back(count);
//             j++;
//         }
//         return list;
//     }
// };
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    void merge(vector<int>& indices, int left, int mid, int right, vector<int>& counts, const vector<int>& nums) {
        vector<int> temp(right - left + 1);
        int i = left;      // Pointer for left subarray
        int j = mid + 1;   // Pointer for right subarray
        int k = 0;
        int right_less_count = 0; // Tracks elements from right array smaller than left element

        while (i <= mid && j <= right) {
            // If right element is strictly smaller than left element
            if (nums[indices[j]] < nums[indices[i]]) {
                right_less_count++;
                temp[k++] = indices[j++];
            } else {
                // Left element is smaller or equal, add the accumulated count
                counts[indices[i]] += right_less_count;
                temp[k++] = indices[i++];
            }
        }

        // Clean up remaining elements in left subarray
        while (i <= mid) {
            counts[indices[i]] += right_less_count;
            temp[k++] = indices[i++];
        }

        // Clean up remaining elements in right subarray
        while (j <= right) {
            temp[k++] = indices[j++];
        }

        // Copy back sorted indices into the main indices array
        for (int p = 0; p < temp.size(); p++) {
            indices[left + p] = temp[p];
        }
    }

    void mergeSort(vector<int>& indices, int left, int right, vector<int>& counts, const vector<int>& nums) {
        if (left >= right) return;
        
        int mid = left + (right - left) / 2;
        mergeSort(indices, left, mid, counts, nums);
        mergeSort(indices, mid + 1, right, counts, nums);
        merge(indices, left, mid, right, counts, nums);
    }

    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int> counts(n, 0);
        vector<int> indices(n);
        
        // Initialize indices with 0, 1, 2, ..., n-1
        iota(indices.begin(), indices.end(), 0);
        
        mergeSort(indices, 0, n - 1, counts, nums);
        
        return counts;
    }
};

