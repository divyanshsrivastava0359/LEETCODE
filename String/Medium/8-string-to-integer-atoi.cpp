// ═══════════════════════════════════════════════════════
// Problem: 8. String to Integer (atoi)
// Difficulty: Medium
// Topics: String
// Runtime: N/A (Beats 0.0%)
// Memory: N/A (Beats 0.0%)
// Submitted: Nov 18, 2026
// Link: https://leetcode.com/problems/string-to-integer-atoi/
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int sign=1;
        int i=0;

        while(i<n && s[i]==' '){
            i++;
        }

        if(i<n && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='-'){
            sign=-1;
        }
          i++;
        }
        long long  result=0;
        while(i<n && (s[i]>='0' && s[i]<='9')){
            int digit= s[i]-48;
            // if(result>INT_MAX/10 || (result==INT_MAX/10 && digit>7)){
            //     return (sign==1)?INT_MAX:INT_MIN;
            // }
            result=result*10+digit;

            if(sign*result >= INT_MAX) return INT_MAX;
            if(sign * result <=INT_MIN) return INT_MIN;
            i++;
        }
        return result*sign;

    }
};
