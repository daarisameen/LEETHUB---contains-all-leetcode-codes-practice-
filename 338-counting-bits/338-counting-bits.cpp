class Solution {
public:
    void solve(int i,vector<int>&v)
    {
        if(i>=v.size())
            return;
        if(i%2==0)
            v[i]=v[i/2];
        else
            v[i]=v[i/2]+1;
        solve(i+1,v);
    }
    vector<int> countBits(int n) {
        vector<int>v(n+1,0);
        if(n==0)
            return v;
        v[1]=1;
        solve(2,v);
        return v;
    }
};