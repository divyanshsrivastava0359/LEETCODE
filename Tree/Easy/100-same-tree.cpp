// ═══════════════════════════════════════════════════════
// Problem: 100. Same Tree
// Difficulty: Easy
// Topics: Tree, Depth-First Search, Breadth-First Search, Binary Tree
// Runtime: 3 ms (Beats 0.6%)
// Memory: 13 MB (Beats 13.0%)
// Submitted: Sep 22, 2026
// Link: https://leetcode.com/problems/same-tree/
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
    vector<int>res;
    vector<int>kit;
    void preorder(TreeNode* node){
        if(!node){
            res.push_back(INT_MIN); 
            return;
        }
        res.push_back(node->val);
        preorder(node->left);
        preorder(node->right);
        
    }
    void preeorder(TreeNode* node){
        if(!node){
            kit.push_back(INT_MIN);
            return;
        }
        kit.push_back(node->val);
        preeorder(node->left);
        preeorder(node->right);
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
         if(p==nullptr && q==nullptr) return true;
         
         res.clear();
        kit.clear();
         preorder(p);
         preeorder(q);
         if(res.size()==kit.size()){
            for(int i=0;i<res.size();i++){
                if(res[i]!=kit[i]){
                    return false;
                }
            }
            return true;
         }
         return false;
    }
};
