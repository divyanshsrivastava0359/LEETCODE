// ═══════════════════════════════════════════════════════
// Problem: 1477. Product of the Last K Numbers
// Difficulty: Medium
// Topics: Array, Math, Design, Data Stream, Prefix Sum
// Runtime: 95 ms (Beats 51.4%)
// Memory: 97.7 MB (Beats 96.1%)
// Submitted: Nov 23, 2026
// Link: https://leetcode.com/problems/product-of-the-last-k-numbers/
// ═══════════════════════════════════════════════════════

class ProductOfNumbers {
private:
    vector<int>prefix;
public:
    ProductOfNumbers() {
        prefix={1};
    }
    
    void add(int num) {
        if(num==0){
            prefix={1};
        }
        else{
            prefix.push_back(prefix.back()*num);
        }
    }
    
    int getProduct(int k) {
        int n=prefix.size();
        if(k>=n){
            return 0;
        }

        return prefix.back()/prefix[n-1-k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
