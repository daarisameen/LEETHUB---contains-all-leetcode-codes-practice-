class Solution {
public:

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>v(cost.size()+2,-1);
        v[cost.size()]=0;
        v[cost.size()+1]=0;
        for(int i=cost.size()-1;i>=0;i--)
        {
            v[i]=min(cost[i]+v[i+1],cost[i]+v[i+2]);
        }
        
        vector<int>z(cost.size()+2,-1);
        z[cost.size()]=0;
        z[cost.size()+1]=0;
        for(int i=cost.size()-1;i>=1;i--)
        {
            z[i]=min(cost[i]+z[i+1],cost[i]+z[i+2]);
        }
        return min(v[0],z[1]);
    }
};