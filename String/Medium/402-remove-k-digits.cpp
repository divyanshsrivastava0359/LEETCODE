// ═══════════════════════════════════════════════════════
// Problem: 402. Remove K Digits
// Difficulty: Medium
// Topics: String, Stack, Greedy, Monotonic Stack
// Runtime: 1 ms (Beats 78.6%)
// Memory: 11.1 MB (Beats 87.4%)
// Submitted: Oct 23, 2026
// Link: https://leetcode.com/problems/remove-k-digits/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length()==k) return "0";
        string result="";
        for(char digit:num){
           while(k>0 && !result.empty() && result.back()>digit){
            result.pop_back();
            k--;
           }
           result.push_back(digit);
        }
        while(!result.empty() && k>0){ // remove extra length 
            result.pop_back();
            k--;
        }
        int j=0;
        while(j < result.length() && result[j] == '0'){
            j++;
        }
        result=result.substr(j);

        return result.empty()?"0":result;
    }
};
