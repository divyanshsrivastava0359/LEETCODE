// ═══════════════════════════════════════════════════════
// Problem: 94. Binary Tree Inorder Traversal
// Difficulty: Easy
// Topics: Stack, Tree, Depth-First Search, Binary Tree
// Runtime: 0 ms (Beats 100.0%)
// Memory: 11.1 MB (Beats 13.7%)
// Submitted: Sep 18, 2026
// Link: https://leetcode.com/problems/binary-tree-inorder-traversal/
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
class Solution{
private:
     vector<int> result;
     void inorder(TreeNode* node){
        if(!node){
             return;
     }
     inorder(node->left);
     result.push_back(node->val);
     inorder(node->right);
     }
public:
      vector<int> inorderTraversal(TreeNode* root){
        inorder(root);

    return result;
      }
};
