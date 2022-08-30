class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int i;
        // cin<<i
        set<int>s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
        vector<int>v(s.begin(),s.end());
        // cout<<v.size();
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            // cout<<v[i]<<" ";
            nums[i]=v[i];
        }
        return v.size();
    }
};