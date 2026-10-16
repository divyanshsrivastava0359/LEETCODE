// ═══════════════════════════════════════════════════════
// Problem: 695. Max Area of Island
// Difficulty: Medium
// Topics: Array, Depth-First Search, Breadth-First Search, Union-Find, Matrix
// Runtime: 1 ms (Beats 61.4%)
// Memory: 27.4 MB (Beats 90.0%)
// Submitted: Oct 16, 2026
// Link: https://leetcode.com/problems/max-area-of-island/
// ═══════════════════════════════════════════════════════

class Solution {
private:
    int explore_island(vector<vector<int>>& grid,int row,int col){
        if(row<0 || row>=grid.size() || col<0 || col>=grid[0].size() || grid[row][col]==0){
            return 0;
        }

        grid[row][col]=0;

        int current_island_size=1;
         current_island_size+=  explore_island(grid,row+1,col);
         current_island_size += explore_island(grid,row-1,col);
         current_island_size += explore_island(grid,row,col+1);
         current_island_size += explore_island(grid,row,col-1);

        
      return current_island_size;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max_area=0;
        int rows=grid.size();
        int cols=grid[0].size();

        for(int r=0;r<rows;r++){
            for(int c=0;c<cols;c++){
                if(grid[r][c]==1){
                    int island=explore_island(grid,r,c);

                    max_area = max(max_area, island);
                }

            }
        }
    return max_area;
    }
};
