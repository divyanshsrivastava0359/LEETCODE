// ═══════════════════════════════════════════════════════
// Problem: 4342. Create Grid With Exactly One Path
// Difficulty: Easy
// Topics: —
// Runtime: 4 ms (Beats 18.7%)
// Memory: 12.1 MB (Beats 15.7%)
// Submitted: Oct 27, 2026
// Link: https://leetcode.com/problems/create-grid-with-exactly-one-path/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>result;

        for(int i=0;i<m;i++){
            string r="";
            for(int j=0;j<n;j++){
                if(i==m-1|| j==0){
                    r.append(".");
                }
                else{
                    r.append("#");
                }
            }
            result.push_back(r);
        }

    return result;

        
    }
};
