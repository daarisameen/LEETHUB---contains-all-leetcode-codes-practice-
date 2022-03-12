class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int>s;
        priority_queue<int>pq;
        pq.push(0);
        for(int j=prices.size()-1;j>=0;j--)
        {
            if(s.size()>0 and s.top()>=prices[j])
                pq.push(s.top()-prices[j]);
            if(s.size()>0 and s.top()<prices[j])
            {
                while(s.top()<prices[j])
                {
                    s.pop();
                    if(s.size()==0)
                        break;
                }
                if(s.size()>0)
                    pq.push(s.top()-prices[j]);
            }
            if(s.size()==0)
            s.push(prices[j]);
            else if(s.top()<prices[j])
               s.push(prices[j]); 
        }
        return pq.top();
    }
};