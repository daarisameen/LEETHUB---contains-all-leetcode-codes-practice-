class Solution {
public:
    int solve(string t1,string t2,int i,int j,vector<vector<int>>&v)
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
        vector<vector<int>>v(text1.length()+1,vector<int>(text2.length()+1,0));
        for(int i=0;i<=text1.length();i++)
        {
            for(int j=0;j<=text2.length();j++)
            {
                if(i==text1.length() || j==text2.length())
                    v[i][j]=0;
            }
        }
        for(int i=text1.length()-1;i>=0;i--)
        {
            for(int j=text2.length()-1;j>=0;j--)
            {
                if(text1[i]==text2[j])
                    v[i][j]=1+v[i+1][j+1];
                else
                {
                    // v[i][j]=max(v[i+1][j],v[i][j+1]);
                    v[i][j]=max(v[i+1][j],v[i][j+1]);
                }
            }
        }
        return v[0][0];
    }
};



