class Solution {
public:
    int solve(vector<vector<int>>& obstacleGrid,int& m,int& n,int i,int j,vector<vector<int>>&v)
    {
        if(i==m-1 and j==n-1)
            return 1;
        if(i>m-1 || j>n-1)
            return 0;
        if(obstacleGrid[i][j]==1)
            return 0;
        if(v[i][j]!=-1)
            return v[i][j];
        return v[i][j]=solve(obstacleGrid,m,n,i+1,j,v)+solve(obstacleGrid,m,n,i,j+1,v);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>v(m,vector<int>(n,-1));
        if(obstacleGrid[m-1][n-1]==1)
            return 0;
        return solve(obstacleGrid,m,n,0,0,v);
    }
};