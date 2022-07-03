class Solution {
public:
    int max_rectangle_histogram(vector<int> height)
    {
        int n=height.size();
        vector<int>ansl,ansr;
        stack<pair<int,int>>sl,sr;
        
        for(int i=0;i<n;i++)
        {
            if(sl.size()==0)
                ansl.push_back(-1);
            if(sl.size()>0 and sl.top().first<height[i])
                ansl.push_back(sl.top().second);
            else if(sl.size()>0 and sl.top().first>=height[i])
            {
                while(sl.size()>0 and sl.top().first>=height[i])
                {
                    sl.pop();
                }
                if(sl.size()==0)
                    ansl.push_back(-1);
                else
                    ansl.push_back(sl.top().second);
            }
            sl.push({height[i],i});
        }
        
        for(int i=n-1;i>=0;i--)
        {
            if(sr.size()==0)
                ansr.push_back(n);
            if(sr.size()>0 and sr.top().first<height[i])
                ansr.push_back(sr.top().second);
            else if(sr.size()>0 and sr.top().first>=height[i])
            {
                while(sr.size()>0 and sr.top().first>=height[i])
                {
                    sr.pop();
                }
                if(sr.size()==0)
                    ansr.push_back(n);
                else
                    ansr.push_back(sr.top().second);
            }
            sr.push({height[i],i});
        }
        reverse(ansr.begin(),ansr.end());
        
        int res=0;
        for(int i=0;i<n;i++)
        {
            res=max(res,height[i]*((i-ansl[i])+(ansr[i]-i)-1));
        }
        cout<<res<<" ";
        return res;
        
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<int>histogram(n,0);
        int result=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]=='1')
                    histogram[j]+=1;
                else
                    histogram[j]=0;
            }
            result = max(result,max_rectangle_histogram(histogram));
        }
        return result;
    }
};