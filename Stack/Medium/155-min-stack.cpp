// ═══════════════════════════════════════════════════════
// Problem: 155. Min Stack
// Difficulty: Medium
// Topics: Stack, Design
// Runtime: 66 ms (Beats 33.2%)
// Memory: 151.1 MB (Beats 67.6%)
// Submitted: Oct 13, 2026
// Link: https://leetcode.com/problems/min-stack/
// ═══════════════════════════════════════════════════════

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

class MinStack {
private:
    deque<pair<int,int>>dq;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(dq.empty()){
            dq.push_back({value,value});
        }
        else{
            int currentmin=min(value,dq.back().second);
            dq.push_back({value,currentmin});
        }
    }
    
    void pop() {
       if(!dq.empty()){
        dq.pop_back();
       }
    }
    int top() {
        return dq.back().first;
    }
    
    int getMin() {
        return dq.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */



