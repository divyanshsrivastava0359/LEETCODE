// ═══════════════════════════════════════════════════════
// Problem: 315. Count of Smaller Numbers After Self
// Difficulty: Hard
// Topics: Array, Binary Search, Divide and Conquer, Binary Indexed Tree, Segment Tree, Merge Sort, Ordered Set, Treap
// Runtime: 70 ms (Beats 88.3%)
// Memory: 89.4 MB (Beats 95.4%)
// Submitted: Nov 13, 2026
// Link: https://leetcode.com/problems/count-of-smaller-numbers-after-self/
// ═══════════════════════════════════════════════════════

#include <vector>
#include <algorithm>

using namespace std;

class FTree {
private:
    vector<int> tree;
    int size;

public:
    FTree(int n) {
        size = n;
        tree.assign(n + 1, 0);
    }
    void update(int index, int delta) {
        for (; index <= size; index += index & -index) {
            tree[index] += delta;
        }
    }
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
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        sorted_nums.erase(unique(sorted_nums.begin(), sorted_nums.end()), sorted_nums.end());


        FTree bit(sorted_nums.size());
        vector<int> result(n, 0);

        for (int i = n - 1; i >= 0; i--) {
            int rank = lower_bound(sorted_nums.begin(), sorted_nums.end(), nums[i]) - sorted_nums.begin() + 1;
            result[i] = bit.query(rank - 1);
            bit.update(rank, 1);
        }

        return result;
    }
};

