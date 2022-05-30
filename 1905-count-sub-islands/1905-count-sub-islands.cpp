class Solution {
public:
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2,vector<vector<int>>& vis,int& flag,int i,int j)
    {
        if(i<0 || j<0 || i>=grid2.size() || j>=grid2[0].size())
            return;
        if(grid2[i][j]==0 || vis[i][j]==1)
            return;
        if(grid2[i][j]==1 and grid1[i][j]==0)
        {
            flag=1;
            return;
        }
        vis[i][j]=1;
        dfs(grid1,grid2,vis,flag,i+1,j);
        dfs(grid1,grid2,vis,flag,i-1,j);
        dfs(grid1,grid2,vis,flag,i,j+1);
        dfs(grid1,grid2,vis,flag,i,j-1);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        vector<vector<int>>vis(grid2.size(),vector<int>(grid2[0].size(),0));
        int cnt=0;
        for(int i=0;i<grid2.size();i++)
        {
            for(int j=0;j<grid2[0].size();j++)
            {
                int flag=0;
                if(grid2[i][j]==1 and vis[i][j]==0)
                {
                    dfs(grid1,grid2,vis,flag,i,j);
                    if(!flag)
                    cnt++;
                }
            }
        }
        return cnt;
    }
};