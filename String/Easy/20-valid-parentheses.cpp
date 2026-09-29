// ═══════════════════════════════════════════════════════
// Problem: 20. Valid Parentheses
// Difficulty: Easy
// Topics: String, Stack, Bracket Sequences
// Runtime: 0 ms (Beats 100.0%)
// Memory: 9 MB (Beats 36.9%)
// Submitted: Sep 29, 2026
// Link: https://leetcode.com/problems/valid-parentheses/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>mapp={
            {'(',')'},
            {'[',']'},
            {'{','}'}
        };
        stack<char>my_stack;

        for(char c:s){
            if(mapp.count(c)){
                my_stack.push(c);
            }
            else{
                if(my_stack.empty()){
                return false;}

                char l=my_stack.top();
                my_stack.pop();

                if(mapp[l]!=c){
                    return false;
                }
            }

        }
        return my_stack.empty();
    }
};
