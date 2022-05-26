class Solution {
public:
    int solve(int i,vector<int>&v)
    {
        if(i==1)
            return 1;
        if(i==0)
            return 0;
        if(v[i]!=-1)
            return v[i];
        return v[i]=solve(i-1,v)+solve(i-2,v);
    }
    int fib(int n) {
        vector<int>v(n+1,-1);
        v[0]=0;
        if(n==0)
            return 0;
        v[1]=1;
        if(n==1)
            return 1;
        return solve(n,v);
    }
};