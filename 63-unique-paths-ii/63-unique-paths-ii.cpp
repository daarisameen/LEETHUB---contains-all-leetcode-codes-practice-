class Solution {
public:
    int solve(vector<vector<int>>& obstacleGrid,int m,int n,int i,int j,vector<vector<int>>& v)
    {
        if(i>=m || i<0 || j>=n || j<0)
            return 0;
        if(obstacleGrid[i][j]==1)
            return 0;
        if(i==m-1 and j==n-1)
            return 1;
        if(v[i][j]!=-1)
            return v[i][j];
        return v[i][j]=solve(obstacleGrid,m,n,i+1,j,v)+solve(obstacleGrid,m,n,i,j+1,v);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>>v(obstacleGrid.size()+1,vector<int>(obstacleGrid[0].size(),-1));
        return solve(obstacleGrid,obstacleGrid.size(),obstacleGrid[0].size(),0,0,v);
    }
};


