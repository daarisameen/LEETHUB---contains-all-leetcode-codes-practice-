class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {vector<int>v;
         v.push_back(i);
            int newtar = target - nums[i];
            for(int j=0;j<nums.size();j++)
            {
                if(i==j)
                    continue;
                else
                    if(nums[j]==newtar)
                    {
                        v.push_back(j);
                        return v;
                    }
            }
        }
        vector<int>v;
        return v;
    }
};