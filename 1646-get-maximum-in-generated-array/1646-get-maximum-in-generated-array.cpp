class Solution {
public:
    int solve(int n,int& mx,vector<int>&v)
    {
        if(n==0)
            return 0;
        if(n==1)
        {
            mx=max(mx,1);
            return 1;
        }
        if(v[n]!=-1)
            return v[n];
        if(n%2==0)
        {
            mx=max(mx,solve(n/2,mx,v));
            return v[n]=solve(n/2,mx,v);
        }
        else
        {
            mx=max(mx,solve((n-1)/2,mx,v)+solve((n-1)/2+1,mx,v));
            return v[n]=solve((n-1)/2,mx,v)+solve((n-1)/2+1,mx,v);
        }
    }
    int getMaximumGenerated(int n) {
        int mx=0;
        int res=-1;
        vector<int>v(n+1,-1);
        for(int i=0;i<n+1;i++)
        int ans=solve(i,mx,v);
        return mx;
    }
};