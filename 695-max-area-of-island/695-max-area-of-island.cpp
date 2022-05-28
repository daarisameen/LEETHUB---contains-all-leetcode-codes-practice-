class Solution {
public:
    void dfs(int& area,vector<vector<int>>& vis,vector<vector<int>>& grid,int i,int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())
            return;
        if(grid[i][j]==0 || vis[i][j]==1)
            return;
        vis[i][j]=1;
        area=max(area,area+1);
        dfs(area,vis,grid,i+1,j);
        dfs(area,vis,grid,i-1,j);
        dfs(area,vis,grid,i,j+1);
        dfs(area,vis,grid,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        int area=0;
        for(int i=0;i<grid.size();i++)
        {   
            for(int j=0;j<grid[0].size();j++)
            {int A=0;
                if(grid[i][j]==1 and vis[i][j]==0)
                    dfs(A,vis,grid,i,j);
             area=max(area,A);
            }
            
        }
        return area;
    }
};