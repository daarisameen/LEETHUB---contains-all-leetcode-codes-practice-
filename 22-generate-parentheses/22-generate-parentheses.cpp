class Solution {
public:
    void solve(vector<string>& v,int op,int co,string s)
    {
        if(op>co || op<0 || co<0)
            return;
        if(op==co and op==0)
        {
            v.push_back(s);
            return;
        }
        solve(v,op-1,co,s+"(");
        solve(v,op,co-1,s+")");
    }
    vector<string> generateParenthesis(int n) {
        int op=n,co=n;
        vector<string>v;
        string s="";
        solve(v,op,co,s);
        return v;
    }
};