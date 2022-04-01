class Solution {
public:
    int solve(int& m,int& n,int i,int j,vector<vector<int>>&v)
    {
        if(i==m-1 and j==n-1)
            return 1;
        if(i>m-1 || j>n-1)
            return 0;
        if(v[i][j]!=-1)
            return v[i][j];
        return v[i][j]=solve(m,n,i+1,j,v)+solve(m,n,i,j+1,v);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>v(m+1,vector<int>(n+1,0));
        v[m-1][n-1]=1;
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(i==m-1 and j==n-1)
                    continue;
                v[i][j]=v[i+1][j]+v[i][j+1];
            }
        }

        return (v[0][0]);
        // return solve(m,n,0,0,v);
    }
};