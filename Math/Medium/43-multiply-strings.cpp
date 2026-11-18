// ═══════════════════════════════════════════════════════
// Problem: 43. Multiply Strings
// Difficulty: Medium
// Topics: Math, String, Simulation
// Runtime: 2 ms (Beats 77.1%)
// Memory: 9.5 MB (Beats 72.8%)
// Submitted: Nov 18, 2026
// Link: https://leetcode.com/problems/multiply-strings/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }
        int m=num1.length();
        int g=num2.length();

        vector<int>res(m+g,0);

        for(int i=m-1;i>=0;i--){
            for(int j=g-1;j>=0;j--){

                int mul=(num1[i]-'0')*(num2[j]-'0');
                int p1=i+j;
                int p2=i+j+1;

                int sum=mul+res[p2];

                res[p2]=sum%10;
                res[p1]+=sum/10;
            }

        }

        string result="";
        for(int ans: res){
            if(!(result.empty() && ans==0)){
                result.push_back(ans+'0');
            }
        }

        return result.empty()?"0":result;

    }
};
