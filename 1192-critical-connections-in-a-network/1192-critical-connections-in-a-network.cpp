class Solution {
public:
    static int N;
    vector<vector<int>> res;
    vector<int> adj[100005];
    int disc[100005],low[100005];
    bool vis[100005];
    int timer;
    void dfs(int v,int par)
    {
        vis[v]=true;
        low[v]=disc[v]=++timer;
        for(auto &to :adj[v])
        {
            if(to==par)continue;
            if(vis[to])
            {
                low[v]=min(low[v],disc[to]);
            }
            else
            {
                dfs(to,v);
                low[v]=min(low[v],low[to]);
                if(low[to]>disc[v])
                {
                    res.push_back({v,to});
                }
            }
        }
    }
    // connections[i] = [ai, bi];
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        timer=0;
        for(auto &x:connections)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        for(int i=0;i<n;++i)
        {
            vis[i]=false;
            disc[i]=low[i]=-1;
        }
        dfs(0,-1);
        return res;
    }
};