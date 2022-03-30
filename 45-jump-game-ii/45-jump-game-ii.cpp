class Solution {
public:
    int solve(vector<int>& nums, int& i,vector<int>&v)
    {
        if(i>=nums.size()-1)
            return 0;
        if(v[i]!=-1)
            return v[i];
        if(nums[i]==0)
            return 1000;
        else
        {
            int mx=INT_MAX;
            priority_queue<int,vector<int>,greater<int>>pq;
            for(int j=i+1;j<=i+nums[i];j++)
            {
                mx=min(mx,1+solve(nums,j,v));
            }
         return v[i]=mx;
        }
        
    }
    int jump(vector<int>& nums) {
        int mx=INT_MAX,i=0;
        
        vector<int>v(nums.size()+1000,-1);
        
        return solve(nums,i,v);
    }
};