class Solution {
public:
    int solve(int n,int& mx)
    {
        if(n==0)
            return 0;
        if(n==1)
        {
            mx=max(mx,1);
            return 1;
        }
        if(n%2==0)
        {
            mx=max(mx,solve(n/2,mx));
            return solve(n/2,mx);
        }
        else
        {
            mx=max(mx,solve((n-1)/2,mx)+solve((n-1)/2+1,mx));
            return solve((n-1)/2,mx)+solve((n-1)/2+1,mx);
        }
    }
    int getMaximumGenerated(int n) {
        int mx=0;
        int res=-1;
        for(int i=0;i<n+1;i++)
        int ans=solve(i,mx);
        return mx;
    }
};