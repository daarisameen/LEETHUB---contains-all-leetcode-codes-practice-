class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<mat.size();i++)
        {
            int start=0,end=mat[i].size()-1;
            int z=0;
            while(start<=end)
            {
                int mid=(end-start)/2 + start;
                if(mat[i][mid]==1)
                {
                    z=mid+1;
                    start=mid+1;
                }
                else
                    end=mid-1;
            }
            pq.push({z,i});
        }
        vector<int>ans;
        while(pq.size()>0)
        {
            if(k==0)
                break;
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};