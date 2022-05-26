class Solution {
public:
    bool solve(int n)
    {
        if(n==1)
            return false;
        if(n==2)
            return true;
        if(solve(n-1)==false)
        {
            return true;
        }
        else
            return false;
    }
    bool divisorGame(int n) {
       vector<int>v(n+1,-1);
        v[1]=false;
        if(n==1)
            return false;
        v[2]=true;
        if(n==2)
            return true;
        v[3]=false;
        if(n==3)
            return false;
        return solve(n);
        
    }
};