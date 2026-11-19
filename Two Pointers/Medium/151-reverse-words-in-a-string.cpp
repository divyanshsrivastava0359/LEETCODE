// ═══════════════════════════════════════════════════════
// Problem: 151. Reverse Words in a String
// Difficulty: Medium
// Topics: Two Pointers, String
// Runtime: 1 ms (Beats 57.9%)
// Memory: 11 MB (Beats 34.1%)
// Submitted: Nov 19, 2026
// Link: https://leetcode.com/problems/reverse-words-in-a-string/
// ═══════════════════════════════════════════════════════




class Solution {
public:
    string reverseWords(string s) {
        string result="";
        string word="";
        for(int i=(s.length()-1);i>=0;i--){
           if(s[i]==' '){
            if(!word.empty()){
              if(!result.empty()) result+=' ';
            result+=(string(word.rbegin(), word.rend()));
            word.clear();
           }
           }
        else{
            word.push_back(s[i]);
           }
        }
    
     if(!word.empty()){
        if(!result.empty()) result+=' ';
        result+=string(word.rbegin(),word.rend());
    }

    

    return result;
    }
};
