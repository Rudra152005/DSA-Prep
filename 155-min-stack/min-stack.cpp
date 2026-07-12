class MinStack {
public:
    stack<int> st, mins;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(mins.empty() || mins.top() >= value){
            mins.push(value);
        }
        
    }
    
    void pop() {
        if(st.top() == mins.top()){
            mins.pop();
        }
        st.pop();
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return mins.top();
        
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