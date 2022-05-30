class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& vis,int i,int j,int & flag,int& A)
    {
        if(i==0 || i==grid.size()-1 || j==0 || j==grid[0].size()-1)
        {
            if(grid[i][j]==1)
                flag=1;
            return;
        }
        if(grid[i][j]==0 || vis[i][j]==1)
            return;
        
        vis[i][j]=1;A+=1;
        dfs(grid,vis,i+1,j,flag,A);
        dfs(grid,vis,i-1,j,flag,A);
        dfs(grid,vis,i,j+1,flag,A);
        dfs(grid,vis,i,j-1,flag,A);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        int cnt=0;int area=0;
        for(int i=1;i<grid.size()-1;i++)
        {
            for(int j=1;j<grid[0].size()-1;j++)
            {int A=0;
                    if(vis[i][j]==0 and grid[i][j]==1)
                    {
                        int flag=0;
                        dfs(grid,vis,i,j,flag,A);
                        if(!flag)
                        area+=A;
                    }
            }
        }
        return area;
    }
};