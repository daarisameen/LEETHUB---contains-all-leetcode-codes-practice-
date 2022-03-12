class Solution {
public:
    void solve(vector<int>& nums,int& mx,int& sum,int i)
    {
        if(i==nums.size())
            return;
      
    
            sum+=nums[i];
            mx=max(mx,sum);
          if(sum<0)
            sum=0;
        solve(nums,mx,sum,i+1);
    }
    int maxSubArray(vector<int>& nums) {
        int mx=INT_MIN;
        int sum=0;
        int i=0;
        solve(nums,mx,sum,i);
        return mx;
    }
};