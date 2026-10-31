// ═══════════════════════════════════════════════════════
// Problem: 684. Redundant Connection
// Difficulty: Medium
// Topics: Depth-First Search, Breadth-First Search, Union-Find, Graph Theory
// Runtime: 0 ms (Beats 100.0%)
// Memory: 13 MB (Beats 94.7%)
// Submitted: Oct 31, 2026
// Link: https://leetcode.com/problems/redundant-connection/
// ═══════════════════════════════════════════════════════

class Solution {
private:
    vector<int>parent;
    vector<int>size;
public:
    void Disjointset(int n){
        parent.resize(n);
        size.resize(n,1);

        for(int i=0;i<n;i++){
           parent[i]=i;
        }
    }
    int findparent(int h){
        if(parent[h]!=h){
            parent[h]=findparent(parent[h]);
        }
        return parent[h];
    }
    int unionnodes(int i,int j){
        int root_i=findparent(i);
        int root_j=findparent(j);

        if(root_i == root_j)return false;

        if(size[root_i]<size[root_j]){
            parent[root_i]=root_j;
            size[root_j]=size[root_i];
        }
        else{
            parent[root_j]=root_i;
            size[root_i]=size[root_j];
        }
        return true;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        Disjointset(n + 1);

        for(const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            if (!unionnodes(u, v)) {
                return edge; 
            }
        }

        return {};
    }
};
