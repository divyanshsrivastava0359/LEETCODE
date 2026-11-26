// ═══════════════════════════════════════════════════════
// Problem: 3625. Stone Removal Game
// Difficulty: Easy
// Topics: Math, Simulation
// Runtime: 0 ms (Beats 100.0%)
// Memory: 7.7 MB (Beats 72.3%)
// Submitted: Nov 26, 2026
// Link: https://leetcode.com/problems/stone-removal-game/
// ═══════════════════════════════════════════════════════

// class Solution {
// public:
//     bool canAliceWin(int n) {
//         int j=10;
//         bool isAliceTurn=true;

//         while(n>=j){
//             n-=j;
//             j--;
//             isAliceTurn=!isAliceTurn;
//         }

//         return !isAliceTurn;
//     }
// };

class Solution {
public:
    bool canAliceWin(int n) {

        for(int i=10;i>=1;i-=2){
            if(n<i){
                return false;
            }
            n-=i;
            if(n<i-1){
               return true;
            }
            n-=(i-1);
        }
        return false;
    }
};
