class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            if(mp[nums1[i]])
                continue;
            mp[nums1[i]]=1;
            int start=0,end=nums2.size()-1;
            while(start<=end)
            {
                int mid=(end-start)/2+start;
                if(nums2[mid]==nums1[i])
                {
                    ans.push_back(nums1[i]);
                    break;
                }
                if(nums2[mid]<nums1[i])
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        return ans;
    }
};