class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]==nums[nums.size()-1] and nums[0]==0)
        {
            vector<vector<int>>ans(1,vector<int>(3,0));
            return ans;
        }
        int target=0;
        int n = nums.size();
        set<vector<int>>sv;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int x = target-nums[i]-nums[j];
                if(binary_search(nums.begin()+j+1,nums.end(),x))
                {
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(x);
                    sort(v.begin(),v.end());
                    sv.insert(v);
                }
            }
        }
        vector<vector<int>>ans(sv.begin(),sv.end());
        return ans;
    }
};