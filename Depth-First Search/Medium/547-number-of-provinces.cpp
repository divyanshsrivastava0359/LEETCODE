// ═══════════════════════════════════════════════════════
// Problem: 547. Number of Provinces
// Difficulty: Medium
// Topics: Depth-First Search, Breadth-First Search, Union-Find, Graph Theory
// Runtime: 0 ms (Beats 100.0%)
// Memory: 19.5 MB (Beats 55.7%)
// Submitted: Oct 31, 2026
// Link: https://leetcode.com/problems/number-of-provinces/
// ═══════════════════════════════════════════════════════

class Solution {
private:
     vector<int>parent;
     vector<int>size;
     int num_components;
public:
    void Disjointset(int n){
        parent.resize(n);
        size.resize(n,1);

        num_components=n;
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
     void unionnodes(int i,int j){
        int root_i=findparent(i);
        int root_j=findparent(j);
        
        if(root_i ==root_j) return ;

        if(size[root_i] < size[root_j]){
            parent[root_i]=root_j;
            size[root_j]+=size[root_i];
        }
        else{
            parent[root_j]=root_i;
            size[root_i]+=size[root_j];
        }
        num_components--;
     }
     int getcomponents(){
        return num_components;
     }
    
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        Disjointset(n);

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isConnected[i][j]==1){
                    unionnodes(i,j);
                }
            }
        }
    return getcomponents();
    }
};
