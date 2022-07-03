class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>ansl;
        vector<int>ansr;
        stack<int>sl;
        stack<int>sr;
        int n=height.size();
        
        vector<int>res;
        
        for(int i=0;i<n;i++)
        {
            if(sl.size()==0)
                ansl.push_back(height[i]);
            if(sl.size()>0 and sl.top()>height[i])
                ansl.push_back(sl.top());
            else if(sl.size()>0 and sl.top()<=height[i])
            {
                while(sl.size()>0 and sl.top()<=height[i])
                {
                    sl.pop();
                }
                if(sl.size()==0)
                    ansl.push_back(height[i]);
                else
                    ansl.push_back(sl.top());
            }
            if(sl.size()>0 and sl.top()>height[i])
                continue;
            else
                sl.push(height[i]);
        }
        
        for(int i=n-1;i>=0;i--)
        {
            if(sr.size()==0)
                ansr.push_back(height[i]);
            if(sr.size()>0 and sr.top()>height[i])
                ansr.push_back(sr.top());
            else if(sr.size()>0 and sr.top()<=height[i])
            {
                while(sr.size()>0 and sr.top()<=height[i])
                {
                    sr.pop();
                }
                if(sr.size()==0)
                    ansr.push_back(height[i]);
                else
                    ansr.push_back(sr.top());
            }
            if(sr.size()>0 and sr.top()>height[i])
                continue;
            else
                sr.push(height[i]);
        }
        reverse(ansr.begin(),ansr.end());
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            ans+=min((ansl[i]-height[i]),(ansr[i]-height[i]));
        }
        return ans;
    }
};