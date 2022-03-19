class Solution {
public:
    int solve(int n,vector<int>&v)
    {
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
        if(v[n]!=-1)
            return v[n];
        return v[n]=solve(n-1,v)+solve(n-2,v)+solve(n-3,v);
    }
    int tribonacci(int n) {
        vector<int>v(n+1,-1);
        return solve(n,v);
    }
};