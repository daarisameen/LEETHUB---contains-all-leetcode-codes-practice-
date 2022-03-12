class Solution {
public:
    int solve(int n,vector<int>& v)
    {
        if(v[n]!=-1)
            return v[n];
        if(n==0)
            return v[n]=0;
        if(n==1)
            return v[n]=1;
        if(n%2==0)
            return v[n]=solve(n/2,v);
        else
            return v[n]=1+solve(n/2,v);
    }
    vector<int> countBits(int n) {
        vector<int>v(n+1,-1);
        for(int i=0;i<n+1;i++)
        solve(i,v);
        return v;
    }
};