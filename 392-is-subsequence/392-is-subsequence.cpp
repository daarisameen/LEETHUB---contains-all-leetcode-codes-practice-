class Solution {
public:
    void solve(string s,string t,int& count,int i,int j)
    {
        if(i==s.length() || j==t.length())
            return;
        else if(s[i]==t[j])
        {
            count++;
            solve(s,t,count,i+1,j+1);
        }
        else
            solve(s,t,count,i,j+1);
    }
    bool isSubsequence(string s, string t) {
        if(s.length()==0)
            return true;
        int count=0,i=0,j=0;
        solve(s,t,count,i,j);
        // cout<<count;
        if(count==s.length())
            return true;
        else
            return false;
    }
};