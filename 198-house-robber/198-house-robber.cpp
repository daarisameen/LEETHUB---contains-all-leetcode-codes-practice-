class Solution {
public:
    int solve(vector<int>& nums,int& mx1, int i,vector<int>& v)
    {
        if(i>=nums.size())
            return 0;
        if(v[i]!=-1)
            return v[i];
        return v[i]=max(mx1+nums[i]+solve(nums,mx1,i+2,v),mx1+nums[i]+solve(nums,mx1,i+3,v));
        
        return 0;
    }
    int rob(vector<int>& nums) {
        vector<int>v(nums.size(),-1);
       int mx1=0;
        
        mx1=solve(nums,mx1,0,v);
        if(nums.size()>1)
        {
            int mx2=0;
            vector<int>z(nums.size(),-1);
            mx2=solve(nums,mx2,1,z);
            mx1=max(mx1,mx2);
        }
        return mx1;
    }
};