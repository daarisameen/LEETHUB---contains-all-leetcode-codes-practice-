class MinStack {
public:
    stack<int>s;
    stack<int>ss;
    
    MinStack() {
        while(!s.empty())
            s.pop();
        while(!ss.empty())
            ss.pop();
    }
    
    void push(int val) {
        s.push(val);
        
        if(ss.size()==0)
        {
            ss.push(val);
        }
        else if(ss.top()>=val)
        {
            ss.push(val);
        }
    }
    
    void pop() {
        if(ss.top()==s.top())
            ss.pop();
        s.pop();
    }
    
    int top() {
        int a = s.top();
        // cout<<a;
        return a;
    }
    
    int getMin() {
        int a = ss.top();
        return a;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */