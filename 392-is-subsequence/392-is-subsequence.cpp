class Solution {
public:
    int solve(string s,string t,int i,int j)
    {
        if(i==s.length() || j==t.length())
            return 0;
        else if(s[i]==t[j])
        {
            return 1+solve(s,t,i+1,j+1);
        }
        else
            return solve(s,t,i,j+1);
    }
    bool isSubsequence(string s, string t) {
        if(s.length()==0)
            return true;
        int count=0,i=0,j=0;
        if(solve(s,t,i,j)==s.length())
            return true;
        else
            return false;
    }
};