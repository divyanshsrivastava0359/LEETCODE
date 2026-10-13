// ═══════════════════════════════════════════════════════
// Problem: 315. Count of Smaller Numbers After Self
// Difficulty: Hard
// Topics: Array, Binary Search, Divide and Conquer, Binary Indexed Tree, Segment Tree, Merge Sort, Ordered Set, Treap
// Runtime: N/A (Beats 0.0%)
// Memory: N/A (Beats 0.0%)
// Submitted: Oct 13, 2026
// Link: https://leetcode.com/problems/count-of-smaller-numbers-after-self/
// ═══════════════════════════════════════════════════════

#include <vector>
#include <algorithm>

using namespace std;

class FenwickTree {
private:
    vector<int> tree;
    int size;

public:
    FenwickTree(int n) {
        size = n;
        tree.assign(n + 1, 0);
    }

    // Add 1 to the frequency of a specific rank
    void update(int index, int delta) {
        for (; index <= size; index += index & -index) {
            tree[index] += delta;
        }
    }

    // Query the prefix sum (total numbers with rank <= index)
    int query(int index) {
        int sum = 0;
        for (; index > 0; index -= index & -index) {
            sum += tree[index];
        }
        return sum;
    }
};

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return {};

        // Step 1: Coordinate Compression
        // Create a sorted copy of unique elements to assign ranks
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        sorted_nums.erase(unique(sorted_nums.begin(), sorted_nums.end()), sorted_nums.end());

        // Step 2: Initialize Fenwick Tree and Result Array
        FenwickTree bit(sorted_nums.size());
        vector<int> result(n, 0);

        // Step 3: Scan from right to left
        for (int i = n - 1; i >= 0; i--) {
            // Find the 1-based rank of the current number
            int rank = lower_bound(sorted_nums.begin(), sorted_nums.end(), nums[i]) - sorted_nums.begin() + 1;

            // Query elements strictly smaller than current rank (up to rank - 1)
            result[i] = bit.query(rank - 1);

            // Insert current element's rank into the BIT
            bit.update(rank, 1);
        }

        return result;
    }
};

