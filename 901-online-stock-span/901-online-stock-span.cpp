class StockSpanner {
public:
    stack<pair<int,int>>s;
    vector<int>ans;
    int index;
    StockSpanner() {index=0;}
    
    int next(int price) {
     // return 0;   
      
            if(s.size()==0)
                ans.push_back(index+1);
            if(s.size()>0 and s.top().first>price)
                ans.push_back(index-s.top().second);
            else if(s.size()>0 and s.top().first<=price)
            {
                while(s.size()>0 and s.top().first<=price)
                {
                    s.pop();
                }
                if(s.size()==0)
                    ans.push_back(index+1);
                else
                    ans.push_back(index-s.top().second);
            }
            s.push({price,index});
        
        index++;
        return ans[ans.size()-1];
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */