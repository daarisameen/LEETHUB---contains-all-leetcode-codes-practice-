class Solution {
public:
    bool solve(string s,string t,int i,int j)
    {
        if(i==s.length() || j==t.length())
            {
                if(i==s.length())
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        if(s[i]==t[j])
        {
            return true and solve(s,t,i+1,j+1);
        }
        else
            return solve(s,t,i,j+1);
    }
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        return solve(s,t,i,j);
    }
};