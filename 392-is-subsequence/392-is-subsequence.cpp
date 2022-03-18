class Solution {
public:
    int solve(string s,string t,int i,int j,vector<vector<int>>&v)
    {
        
        if(i==s.length() || j==t.length())
            return 0;
        else if(v[i][j]!=-1)
            return v[i][j];
        else if(s[i]==t[j])
            return v[i][j]=1+solve(s,t,i+1,j+1,v);
        else
            return v[i][j]=solve(s,t,i,j+1,v);
    }
    bool isSubsequence(string s, string t) {
        if(s.length()==0)
            return true;
        int i=0,j=0;
        vector<vector<int>>v(s.length(),vector<int>(t.length(),-1));
        if(solve(s,t,i,j,v)==s.length())
            return true;
        else
            return false;
    }
};