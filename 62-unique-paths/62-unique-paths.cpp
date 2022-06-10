class Solution {
public:
    int solve(int m,int n,int i,int j,vector<vector<int>>& v)
    {
        if(i>=m || i<0 || j>=n || j<0)
            return 0;
        if(i==m-1 and j==n-1)
            return 1;
        if(v[i][j]!=-1)
            return v[i][j];
        return v[i][j]=solve(m,n,i+1,j,v)+solve(m,n,i,j+1,v);
    }
    int uniquePaths(int m, int n) {
        int cnt=0;
        vector<vector<int>>v(m+1,vector<int>(n+1,-1));
        return solve(m,n,0,0,v);
        
    }
};