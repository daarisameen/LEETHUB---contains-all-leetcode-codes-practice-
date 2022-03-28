class Solution {
public:
    int solve(string& t1,string& t2,int i,int j,vector<vector<int>>&v)
    {
        if(i==t1.length() || j==t2.length())
            return 0;
        if(v[i][j]!=-1)
            return v[i][j];
        if(t1[i]==t2[j])
            return v[i][j]=1+solve(t1,t2,i+1,j+1,v);
        else
            return v[i][j]=max(solve(t1,t2,i+1,j,v),solve(t1,t2,i,j+1,v));
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>v(text1.length()+1,vector<int>(text2.length()+1,-1));
        return solve(text1,text2,0,0,v);
    }
};



