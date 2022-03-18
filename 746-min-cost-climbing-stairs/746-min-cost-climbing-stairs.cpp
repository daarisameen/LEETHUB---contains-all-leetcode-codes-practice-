class Solution {
public:
    int solve(vector<int>cost,int i,vector<int>&v)
    {
        if(i>=cost.size())
            return 0;
        if(v[i]!=-1)
            return v[i];
        int l=cost[i]+solve(cost,i+1,v);
        int r=cost[i]+solve(cost,i+2,v);
        return v[i]=min(l,r);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>v(cost.size(),-1);
        return min(solve(cost,0,v),solve(cost,1,v));
    }
};