class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& vis,int i,int j,int & flag)
    {
        if(i==0 || i==grid.size()-1 || j==0 || j==grid[0].size()-1)
        {
            if(grid[i][j]==0)
                flag=1;
            return;
        }
        if(grid[i][j]==1 || vis[i][j]==1)
            return;
        
        vis[i][j]=1;
        dfs(grid,vis,i+1,j,flag);
        dfs(grid,vis,i-1,j,flag);
        dfs(grid,vis,i,j+1,flag);
        dfs(grid,vis,i,j-1,flag);
    }
    int closedIsland(vector<vector<int>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        int cnt=0;
        for(int i=1;i<grid.size()-1;i++)
        {
            for(int j=1;j<grid[0].size()-1;j++)
            {
                    if(vis[i][j]==0 and grid[i][j]==0)
                    {
                        int flag=0;
                        dfs(grid,vis,i,j,flag);
                        if(!flag)
                        cnt++;
                    }
            }
        }
        return cnt;
    }
};