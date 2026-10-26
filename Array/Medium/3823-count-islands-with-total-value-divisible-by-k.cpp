// ═══════════════════════════════════════════════════════
// Problem: 3823. Count Islands With Total Value Divisible by K
// Difficulty: Medium
// Topics: Array, Depth-First Search, Breadth-First Search, Union-Find, Matrix
// Runtime: 24 ms (Beats 85.4%)
// Memory: 78.7 MB (Beats 88.7%)
// Submitted: Oct 26, 2026
// Link: https://leetcode.com/problems/count-islands-with-total-value-divisible-by-k/
// ═══════════════════════════════════════════════════════

class Solution {
private:
       long long sumofisland(vector<vector<int>>& grid,int r,int c,int row,int col){
        if(r<0 || r>=row || c>=col || c<0 || grid[r][c]==0){
            return 0;
        }
        long long current_value=grid[r][c];
        grid[r][c]=0;
        long long total_island_sum=current_value;
        
        total_island_sum+= sumofisland(grid,r-1,c,row,col);
        total_island_sum+= sumofisland(grid,r+1,c,row,col);
        total_island_sum+= sumofisland(grid,r,c-1,row,col);
        total_island_sum+= sumofisland(grid,r,c+1,row,col);


    return total_island_sum;

       }
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int row=grid.size();
        int col=grid[0].size();

        int max_area=0;

        for(int r=0;r<row;r++){
            for(int c=0;c<col;c++){
                if(grid[r][c]>0){
                    long long island_sum= sumofisland(grid,r,c,row,col);


                    if(island_sum%k==0){
                        max_area++;
                    }
                }
            }
        }

    return max_area;
    }
};
