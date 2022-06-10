class Solution {
public:
    double solve1(double x,int n,int i,double p)
    {
        if(i==n)
            return x;
        return solve1(x*p,n,i-1,p);
    }
    double solve(double x,int n,int i,double p)
    {
        if(i==n)
            return x;
        return solve(x*p,n,i+1,p);
    }
    double myPow(double x, int n) {
        if(n==1 || x==1)
            return x;
        if(x==-1)
        {
            if(n%2==0)
                return 1.00000;
            else
                return -1.00000;
        }
        if(n==INT_MAX||n==INT_MIN)
            return 0.00000;
        
        if(n==0)
            return double(1);
        if(n==-1)
            return 1/x;
        double ans;
        if(n>0)
            ans=solve(x,n,1,x);
        if(n<0)
            ans=solve1(1/x,n,-1,1/x);
        return ans;
    }
};