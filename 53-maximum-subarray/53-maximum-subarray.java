class Solution {
public:
    void solve(vector<int>&nums,int& mx,int i,int& sum)
    {
        if(i==nums.size())
            return;
        sum+=nums[i];
        mx=max(mx,sum);
        if(sum<0)
            sum=0;
        solve(nums,mx,i+1,sum);
        return;
    }
    int maxSubArray(vector<int>& nums) {
        int mx=-1e5;
        int sum=0;
        solve(nums,mx,0,sum);
        return mx;
    }
};