class MinStack {
public:
    stack<pair<int,int>>s;
    
    MinStack() {}
    
    void push(int val) {
        if(s.size()>0 and val<=s.top().second)
        {
            s.push({val,val});
        }
        else if(s.size()==0)
        {
            s.push({val,val});
        }
        else
        {
            s.push({val,s.top().second});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};
