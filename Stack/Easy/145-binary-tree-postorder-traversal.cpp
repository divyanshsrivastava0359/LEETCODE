// ═══════════════════════════════════════════════════════
// Problem: 145. Binary Tree Postorder Traversal
// Difficulty: Easy
// Topics: Stack, Tree, Depth-First Search, Binary Tree
// Runtime: 2 ms (Beats 6.1%)
// Memory: 11.3 MB (Beats 8.5%)
// Submitted: Sep 18, 2026
// Link: https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    vector<int>m;
    void postorder(TreeNode* node){
        if(!node){
            return;
        }
        postorder(node->left);
        postorder(node->right);
        m.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);

    return m;
    }
};
