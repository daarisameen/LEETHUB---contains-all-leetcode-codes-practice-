class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<intervals.size();i++)
        {
            pq.push({intervals[i][0],intervals[i][1]});
        }
        vector<vector<int>>v;
        vector<int>z;
        z.push_back(pq.top().first);
        z.push_back(pq.top().second);
        v.push_back(z);
        pq.pop();
        while(!pq.empty())
        {
            int l2=pq.top().first;
            int r2=pq.top().second;
            pq.pop();
            vector<int>x;
            int l1=v[v.size()-1][0];
            int r1=v[v.size()-1][1];
            if(r2==l1)
            {
                v[v.size()-1][1]=r2;
            }
            else if(r2==l1)
            {
                v[v.size()-1][0]=l2;
            }
            else if(r1<l2 || r2<l1)
            {
                x.push_back(l2);
                x.push_back(r2);
                v.push_back(x);
            }
            else if(r2<=r1 and l1<=l2)
                continue;
            else if(r1<=r2 and l2<=l1)
            {
                v[v.size()-1][1]=r2;
                v[v.size()-1][0]=l2;
            }
            else if(r1<=r2 and l1<=l2)
            {
                v[v.size()-1][1]=r2;
                v[v.size()-1][0]=l1;
            }
            else if(r2<=r1 and l2<=l1)
            {
                v[v.size()-1][1]=r1;
                v[v.size()-1][0]=l2;
            }
        }
        return v;
    }
};