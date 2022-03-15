class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        int start=0,end=m-1;
        int ans=m;
        while(start<=end)
        {
            int mid=(end-start)/2 + start;
            if(grid[mid][n-1]<0)
            {
                ans=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        int count=0;
        for(int i=ans;i<m;i++)
        {
            int start1=0,end1=n-1;
            int ans1=0;
            while(start1<=end1)
            {
                int mid1=(end1-start1)/2 + start1;
                if(grid[i][mid1]<0)
                {
                    ans1=mid1;
                    end1=mid1-1;
                }
                else
                    start1=mid1+1;
            }
            count+=(n-ans1);
        }
        return count;
    }
};