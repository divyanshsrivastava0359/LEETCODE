// ═══════════════════════════════════════════════════════
// Problem: 1442. Number of Operations to Make Network Connected
// Difficulty: Medium
// Topics: Depth-First Search, Breadth-First Search, Union-Find, Graph Theory
// Runtime: 2 ms (Beats 90.2%)
// Memory: 41.5 MB (Beats 99.9%)
// Submitted: Nov 3, 2026
// Link: https://leetcode.com/problems/number-of-operations-to-make-network-connected/
// ═══════════════════════════════════════════════════════

class Solution {
private:
    vector<int>parent;

    int findparent(int x){
        if(parent[x]!=x){
            parent[x]=findparent(parent[x]);
        }
                return parent[x];
    }
    bool unionnodes(int i,int j){
        int root_i=findparent(i);
        int root_j=findparent(j);

        if(root_i!=root_j){
            parent[root_i]=root_j;
            return true;
        }
        return false;
    }
    
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int cables=connections.size();
        if(cables<n-1) {
        return -1;
        }
        parent.resize(n);

        iota(parent.begin(),parent.end(),0);
        int su_merge=0;

        for(const auto& conn:connections){
            int computer1=conn[0];
            int computer2=conn[1];

            if(unionnodes(computer1,computer2)){
                su_merge++;
            }
        }
        int components=n-su_merge;

        return components-1;

    }
};
