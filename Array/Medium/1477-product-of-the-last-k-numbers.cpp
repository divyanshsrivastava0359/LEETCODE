// ═══════════════════════════════════════════════════════
// Problem: 1477. Product of the Last K Numbers
// Difficulty: Medium
// Topics: Array, Math, Design, Data Stream, Prefix Sum
// Runtime: 81 ms (Beats 70.4%)
// Memory: 98 MB (Beats 71.2%)
// Submitted: Nov 23, 2026
// Link: https://leetcode.com/problems/product-of-the-last-k-numbers/
// ═══════════════════════════════════════════════════════

class ProductOfNumbers {
public:
    vector<int>df;
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

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
