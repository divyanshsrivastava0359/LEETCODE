// ═══════════════════════════════════════════════════════
// Problem: 144. Binary Tree Preorder Traversal
// Difficulty: Easy
// Topics: Stack, Tree, Depth-First Search, Binary Tree
// Runtime: 0 ms (Beats 100.0%)
// Memory: 10.9 MB (Beats 44.6%)
// Submitted: Sep 18, 2026
// Link: https://leetcode.com/problems/binary-tree-preorder-traversal/
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
    vector<int>result;
    void preorder(TreeNode* node) {
        if(!node){
            return;
        }
        result.push_back(node->val);
        preorder(node->left);
        preorder(node->right);
    }

    vector<int>preorderTraversal(TreeNode* root){
        preorder(root);

    return result;
    }
};
