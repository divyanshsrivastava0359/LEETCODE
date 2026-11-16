// ═══════════════════════════════════════════════════════
// Problem: 2361. Calculate Digit Sum of a String
// Difficulty: Easy
// Topics: String, Simulation
// Runtime: 0 ms (Beats 100.0%)
// Memory: 8.9 MB (Beats 86.3%)
// Submitted: Nov 16, 2026
// Link: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length()>k){
            string n="";

            for(int i=0;i<s.length();i+=k){
                int c=0;

                for(int j=i;j<i+k && j<s.length();j++){
                     //c+=stoi(s.substr(j,1));
                     c+=(s[j])-48;
                }
                n+=to_string(c);// stoi() string---> intezer
            }
            s=n;  // here what we accumulate in n we transfer it to s again 
        }

        return s;
    }   
    
};
