class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums[0]==nums[nums.size()-1] and nums[0]==0)
        {
            vector<vector<int>>v(1,vector<int>(3,0));
            return v;
        }
        set<vector<int>>sv;
        for(int i=0; i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int x=0-nums[i]-nums[j];
                if(binary_search(nums.begin()+j+1,nums.end(),x))
                {
                    vector<int>v;
                    v.push_back(x);
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    sort(v.begin(),v.end());
                    sv.insert(v);
                }
            }
        }
        vector<vector<int>>ans(sv.begin(),sv.end());
        return ans;
    }
};