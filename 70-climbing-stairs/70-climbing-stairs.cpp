class Solution {
public:
    int solve(int i,int n,vector<int>&v)
    {
        if(i>n)return v[i]=0;
        if(i==n)return v[i]=1;
        if(v[i]!=-1)
            return v[i];
        return v[i] = solve(i+1,n,v)+solve(i+2,n,v);
    }
    int climbStairs(int n) {
        vector<int>v(n+2,-1);
        // return solve(0,n,v);
        for(int i=0;i<n+2;i++)
        {
            if(i>n)
                v[i]=0;
            if(i==n)
                v[i]=1;
        }
        for(int i=n-1;i>=0;i--)
        {
            v[i]=v[i+1]+v[i+2];
        }
        return v[0];
    }
};