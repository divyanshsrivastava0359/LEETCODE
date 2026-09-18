// ═══════════════════════════════════════════════════════
// Problem: 110. Balanced Binary Tree
// Difficulty: Easy
// Topics: Tree, Depth-First Search, Binary Tree
// Runtime: 1 ms (Beats 11.9%)
// Memory: 23.1 MB (Beats 54.6%)
// Submitted: Sep 18, 2026
// Link: https://leetcode.com/problems/balanced-binary-tree/
// ═══════════════════════════════════════════════════════

#include <algorithm>
#include <cmath>

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }

private:
    int checkHeight(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }

        int leftHeight = checkHeight(node->left);
        if (leftHeight == -1) return -1; 

        int rightHeight = checkHeight(node->right);
        if (rightHeight == -1) return -1; 

        if (std::abs(leftHeight - rightHeight) > 1) {
            return -1; 
        }

        return 1 + std::max(leftHeight, rightHeight);
    }
};

