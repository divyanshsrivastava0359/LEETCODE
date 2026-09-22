// ═══════════════════════════════════════════════════════
// Problem: 101. Symmetric Tree
// Difficulty: Easy
// Topics: Tree, Depth-First Search, Breadth-First Search, Binary Tree
// Runtime: 0 ms (Beats 100.0%)
// Memory: 18.5 MB (Beats 42.1%)
// Submitted: Sep 22, 2026
// Link: https://leetcode.com/problems/symmetric-tree/
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
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return ismirror(root->left,root->right);
    }

private:
    bool ismirror(TreeNode* left,TreeNode* right){
        if (left == nullptr && right == nullptr) return true;
        if (left == nullptr || right == nullptr) return false;
        return (left->val == right->val) && 
               ismirror(left->left, right->right) && 
               ismirror(left->right, right->left);
    }
};

