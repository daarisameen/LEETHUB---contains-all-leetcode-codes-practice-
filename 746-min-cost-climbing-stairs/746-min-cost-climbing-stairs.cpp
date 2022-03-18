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
        // return min(solve(cost,0,v),solve(cost,1,v));
    }
};