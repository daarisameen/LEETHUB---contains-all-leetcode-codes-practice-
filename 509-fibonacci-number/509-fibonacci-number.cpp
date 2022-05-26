class Solution {
public:
    int solve(int i)
    {
        if(i==1)
            return 1;
        if(i==0)
            return 0;
        return solve(i-1)+solve(i-2);
    }
    int fib(int n) {
        vector<int>v(n+1,0);
        v[0]=0;
        if(n==0)
            return 0;
        v[1]=1;
        if(n==1)
            return 1;
        return solve(n);
    }
};