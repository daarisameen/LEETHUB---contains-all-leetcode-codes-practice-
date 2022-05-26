class Solution {
public:
    bool solve(int n)
    {
        if(n==1)
            return false;
        
        if(solve(n-1)==false)
        {
            return true;
        }
        else
            return false;
    }
    bool divisorGame(int n) {
        if(n==1)
            return false;
        return solve(n);
        
    }
};