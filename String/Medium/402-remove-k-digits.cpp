// ═══════════════════════════════════════════════════════
// Problem: 402. Remove K Digits
// Difficulty: Medium
// Topics: String, Stack, Greedy, Monotonic Stack
// Runtime: 1 ms (Beats 86.1%)
// Memory: 10.8 MB (Beats 97.4%)
// Submitted: Nov 14, 2026
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
// class Solution {
// public:
//     std::string removeKdigits(std::string num, int k) {
//         int n = num.length();
//         if (n == k) return "0";
        
//         int top = -1; 
        
//         for (int i = 0; i < n; i++) {
//             while (k > 0 && top >= 0 && num[top] > num[i]) {
//                 top--;
//                 k--;
//             }
//             top++;
//             num[top] = num[i];
//         }
//         top -= k;
//         int nonZeroStart = 0;
//         while (nonZeroStart <= top && num[nonZeroStart] == '0') {
//             nonZeroStart++;
//         }
//         if (nonZeroStart > top) return "0";
//         return num.substr(nonZeroStart, top - nonZeroStart + 1);
//     }
// };
class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        if(n==k) return "0";

        int top=-1;

        for(int i=0;i<n;i++){
            while(k>0 && top>=0 && num[top]>num[i]){
                top--;
                k--;
            }
            top++;
            num[top]=num[i];
        }
        top=top-k;
        int j=0;
        while(j<=top && num[j]=='0'){
            j++;
        }
        if(j>top) return"0";

        return num.substr(j,top-j+1);
    }
};
