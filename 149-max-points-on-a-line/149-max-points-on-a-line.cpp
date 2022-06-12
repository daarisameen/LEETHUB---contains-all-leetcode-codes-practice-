class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if(points.size()==0)
        {
            return 0;
        }
        int ans=0;
        for(int i=0;i<points.size();i++)
        {
            unordered_map<double,int>m;
            //for every pair i ,i+1 find if those are lyning on same slope
            for(int j=i+1;j<points.size();j++)
            {
                //edge case when x2-x1==0 in slope finding, we take this case seperately
                if(!(points[i][0]-points[j][0]))
                {
                    m[100000]++;
                    continue;
                }
                //finding slope
                double slope=(points[j][1]-points[i][1])*1.0/(points[j][0]-points[i][0]);
                //increase count of points on same slope
                m[slope]++;
            }
            for(auto it:m)
            {
                ans=max(it.second,ans);
            }
        }
        //since we were comparing two points and doing just +1 we need to do a +1 at last.
        return ans+1;
    }
};