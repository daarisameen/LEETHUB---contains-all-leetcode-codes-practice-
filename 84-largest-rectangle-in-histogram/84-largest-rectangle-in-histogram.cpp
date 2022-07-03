class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>ansr;
        vector<int>ansl;
        stack<pair<int,int>>sr;
        stack<pair<int,int>>sl;
        int n=heights.size();
        for(int i=0;i<n;i++)
        {
            if(sl.size()==0)
                ansl.push_back(-1);
            if(sl.size()>0 and sl.top().first<heights[i])
                ansl.push_back(sl.top().second);
            else if(sl.size()>0 and sl.top().first>=heights[i])
            {
                while(sl.size()>0 and sl.top().first>=heights[i])
                    sl.pop();
                if(sl.size()==0)
                    ansl.push_back(-1);
                else
                    ansl.push_back(sl.top().second);
            }
            sl.push({heights[i],i});
        }
        
        for(int i=n-1;i>=0;i--)
        {
            if(sr.size()==0)
                ansr.push_back(n);
            if(sr.size()>0 and sr.top().first<heights[i])
                ansr.push_back(sr.top().second);
            else if(sr.size()>0 and sr.top().first>=heights[i])
            {
                while(sr.size()>0 and sr.top().first>=heights[i])
                    sr.pop();
                if(sr.size()==0)
                    ansr.push_back(n);
                else
                    ansr.push_back(sr.top().second);
            }
            sr.push({heights[i],i});
        }
        reverse(ansr.begin(),ansr.end());
        
        int area=INT_MIN;
        for(int i=0;i<n;i++)
        {
            area = max(area,heights[i]*((i-ansl[i])+(ansr[i]-i)-1));
        }
        return area;
    }
};