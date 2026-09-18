// ═══════════════════════════════════════════════════════
// Problem: 104. Maximum Depth of Binary Tree
// Difficulty: Easy
// Topics: Tree, Depth-First Search, Breadth-First Search, Binary Tree
// Runtime: 0 ms (Beats 100.0%)
// Memory: 22.2 MB (Beats 27.2%)
// Submitted: Sep 18, 2026
// Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
// ═══════════════════════════════════════════════════════

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
         int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        return 1 + std::max(leftDepth, rightDepth);
    }
};
