// ═══════════════════════════════════════════════════════
// Problem: 3625. Stone Removal Game
// Difficulty: Easy
// Topics: Math, Simulation
// Runtime: 0 ms (Beats 100.0%)
// Memory: 7.6 MB (Beats 72.3%)
// Submitted: Nov 26, 2026
// Link: https://leetcode.com/problems/stone-removal-game/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    bool canAliceWin(int n) {
        int j=10;
        bool isAliceTurn=true;

        while(n>=j){
            n-=j;
            j--;
            isAliceTurn=!isAliceTurn;
        }

        return !isAliceTurn;
    }
};
