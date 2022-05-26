class Solution {
public:
    int solve(int& sum,int i,vector<int>& cost,vector<int>&v)
    {
        if(i>=cost.size())
            return 0;
        if(v[i]!=-1)
            return v[i];
        return v[i]=min(sum+cost[i]+solve(sum,i+1,cost,v),sum+cost[i]+solve(sum,i+2,cost,v));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int sum1=0,sum2=0;
        vector<int>v(cost.size()+2,-1);        
        
        return min(solve(sum1,0,cost,v),solve(sum2,1,cost,v));
        
    }
};