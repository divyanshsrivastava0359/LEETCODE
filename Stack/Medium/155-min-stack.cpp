// ═══════════════════════════════════════════════════════
// Problem: 155. Min Stack
// Difficulty: Medium
// Topics: Stack, Design
// Runtime: 59 ms (Beats 54.9%)
// Memory: 151.4 MB (Beats 30.0%)
// Submitted: Oct 13, 2026
// Link: https://leetcode.com/problems/min-stack/
// ═══════════════════════════════════════════════════════

#include <deque>

class MinStack {
private:
    std::deque<int> data_dq; // Stores all elements
    std::deque<int> min_dq;  // Stores historical minimums

public:
    MinStack() {
        // Deques initialize automatically
    }
    
    void push(int value) {
        data_dq.push_back(value);
        
        // Push to min_dq if it's empty or the value is <= current minimum
        if (min_dq.empty() || value <= min_dq.back()) {
            min_dq.push_back(value);
        }
    }
    
    void pop() {
        if (data_dq.empty()) return;
        
        // If the top element being removed is the minimum, remove it from min_dq too
        if (data_dq.back() == min_dq.back()) {
            min_dq.pop_back();
        }
        data_dq.pop_back();
    }
    
    int top() {
        return data_dq.back();
    }
    
    int getMin() {
        return min_dq.back();
    }
};
// class MinStack {
// private:
//     stack<int>mainstack;
//     stack<int>minstack;
// public:
//     MinStack() {
        
//     }
    
//     void push(int value) {
//         mainstack.push(value);

//         if(minstack.empty() || value<=minstack.top() ){
//             minstack.push(value);
//         }
//     }
    
//     void pop() {
//         if(mainstack.top()==minstack.top()){
//             minstack.pop();
//         }
//         mainstack.pop();
//     }
    
//     int top() {
//         return mainstack.top();
//     }
    
//     int getMin() {
//         return minstack.top();
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(value);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */

// class MinStack {
// private:
//     deque<pair<int,int>>dq;
// public:
//     MinStack() {
        
//     }
    
//     void push(int value) {
//         if(dq.empty()){
//             dq.push_back({value,value});
//         }
//         else{
//             int currentmin=min(value,dq.back().second);
//             dq.push_back({value,currentmin});
//         }
//     }
    
//     void pop() {
//        if(!dq.empty()){
//         dq.pop_back();
//        }
//     }
//     int top() {
//         return dq.back().first;
//     }
    
//     int getMin() {
//         return dq.back().second;
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(value);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */



