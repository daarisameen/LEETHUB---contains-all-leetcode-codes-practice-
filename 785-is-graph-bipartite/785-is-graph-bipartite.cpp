class Solution {
public:
    bool dfs(vector<int>adj[],vector<int>&vis,vector<int>&color,int node,int prev)
    {
        vis[node]=1;
        for(auto i : adj[node])
        {
            if(vis[i])
            {
                if(color[i]==color[node])
                    return false;
            }
            else 
            {
                color[i]=color[node]*-1;
                if(!dfs(adj,vis,color,i,node))
                    return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>adj[graph.size()];
        for(int i=0;i<graph.size();i++)
        {
            for(int j=0;j<graph[i].size();j++)
            {
                adj[i].push_back(graph[i][j]);
            }
        }
        vector<int>vis(graph.size(),0);
        vector<int>color(graph.size(),0);
        for(int i=0;i<graph.size();i++)
        {
            if(vis[i]==0)
            {
                color[i]=1;
                if(!dfs(adj,vis,color,i,-1))
                    return false;
            }
        }
        return true;
    }
};