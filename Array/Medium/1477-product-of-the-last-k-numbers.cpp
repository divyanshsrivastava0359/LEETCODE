// ═══════════════════════════════════════════════════════
// Problem: 1477. Product of the Last K Numbers
// Difficulty: Medium
// Topics: Array, Math, Design, Data Stream, Prefix Sum
// Runtime: 97 ms (Beats 46.7%)
// Memory: 97.9 MB (Beats 88.1%)
// Submitted: Nov 23, 2026
// Link: https://leetcode.com/problems/product-of-the-last-k-numbers/
// ═══════════════════════════════════════════════════════

class ProductOfNumbers {
private:
vector<int>df;
public:
    ProductOfNumbers() {
        df={1};
    }
    
    void add(int num) {
        if(num==0){
            df={1};
        }
        else{
            df.push_back(df.back()*num);
        }
    }
    
    int getProduct(int k) {
        int n=df.size();
        if(k>=n){
          return 0;
        }
    
        return df.back()/df[n-1-k];
    }
};


