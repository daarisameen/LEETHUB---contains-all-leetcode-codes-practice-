class Solution {
public:
    int solve(vector<vector<int>>& grid,int sum,int i,int j,int &m,int &n,vector<vector<int>>& v)
    {
        if(i==m-1 and j==n-1)
        {
            return grid[i][j];
        }
        if(i>m-1 || j>n-1)
            return 1e5;
        if(v[i][j]!=-1)
            return v[i][j];
        return v[i][j]=min(grid[i][j]+solve(grid,sum,i+1,j,m,n,v),grid[i][j]+solve(grid,sum,i,j+1,m,n,v));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int sum=grid[0][0];
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>v(m,vector<int>(n,-1));
        return solve(grid,sum,0,0,m,n,v);
    }
};