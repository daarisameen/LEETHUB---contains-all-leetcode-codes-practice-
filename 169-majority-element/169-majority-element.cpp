class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k=nums.size()/2;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        int ans=0;
        for(auto i:mp)
        {
           if(i.second>k)
           {
               ans=i.first;
               }
        }
        return ans;
    }
};