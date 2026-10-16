# ═══════════════════════════════════════════════════════
# Problem: 695. Max Area of Island
# Difficulty: Medium
# Topics: Array, Depth-First Search, Breadth-First Search, Union-Find, Matrix
# Runtime: 34 ms (Beats 42.6%)
# Memory: 14.1 MB (Beats 74.0%)
# Submitted: Oct 16, 2026
# Link: https://leetcode.com/problems/max-area-of-island/
# ═══════════════════════════════════════════════════════

class Solution(object):
    def explore_island(self,grid,row,col):
        if(row<0 or row>=len(grid) or col<0 or col>=len(grid[0]) or grid[row][col]==0):
            return 0

        grid[row][col]=0

        c=1
        c+=self.explore_island(grid,row+1,col)
        c+=self.explore_island(grid,row-1,col)
        c+=self.explore_island(grid,row,col+1)
        c+=self.explore_island(grid,row,col-1)

    
        return c


    def maxAreaOfIsland(self, grid):
        max_area=0
        rows=len(grid)
        cols=len(grid[0])

        for r in range(0,rows):
            for c in range(0,cols):
                if grid[r][c]==1:
                    island=self.explore_island(grid,r,c)
                    max_area=max(max_area,island)

        
        return max_area
        
        
