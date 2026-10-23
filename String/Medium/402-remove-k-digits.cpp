// ═══════════════════════════════════════════════════════
// Problem: 402. Remove K Digits
// Difficulty: Medium
// Topics: String, Stack, Greedy, Monotonic Stack
// Runtime: 0 ms (Beats 100.0%)
// Memory: 10.5 MB (Beats 99.7%)
// Submitted: Oct 23, 2026
// Link: https://leetcode.com/problems/remove-k-digits/
// ═══════════════════════════════════════════════════════

// class Solution {
// public:
//     string removeKdigits(string num, int k) {
//         if(num.length()==k) return "0";
//         string result="";
//         for(char digit:num){
//            while(k>0 && !result.empty() && result.back()>digit){
//             result.pop_back();
//             k--;
//            }
//            result.push_back(digit);
//         }
//         while(!result.empty() && k>0){ // remove extra length 
//             result.pop_back();
//             k--;
//         }
//         int j=0;
//         while(j < result.length() && result[j] == '0'){
//             j++;
//         }
//         result=result.substr(j);

//         return result.empty()?"0":result;
//     }
// };

#include <string>

class Solution {
public:
    std::string removeKdigits(std::string num, int k) {
        int n = num.length();
        if (n == k) return "0";
        
        int top = -1; // Acts as the top index of our in-place stack
        
        for (int i = 0; i < n; ++i) {
            // In-place stack manipulation
            while (k > 0 && top >= 0 && num[top] > num[i]) {
                top--;
                k--;
            }
            top++;
            num[top] = num[i];
        }
        
        // If k > 0, truncate the largest elements from the tail
        top -= k;
        
        // Find the first non-zero character index
        int nonZeroStart = 0;
        while (nonZeroStart <= top && num[nonZeroStart] == '0') {
            nonZeroStart++;
        }
        
        // If everything left is zeros or empty
        if (nonZeroStart > top) return "0";
        
        // Return the final result slice
        return num.substr(nonZeroStart, top - nonZeroStart + 1);
    }
};

