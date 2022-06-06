class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        sort(nums2.begin(),nums2.end());
        vector<bool>v(nums2.size(),false);
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {

            int start=0,end=nums2.size()-1;
            int k=-1;
            while(start<=end)
            {
                int mid=(end-start)/2+start;
                if(nums2[mid]==nums1[i] and v[mid]==false)
                {
                    k=mid;
                    end=mid-1;
                }
                else if(nums2[mid]<=nums1[i])
                    start=mid+1;
                else
                    end=mid-1;
            }
           if(k!=-1)
           {
               v[k]=true;
               ans.push_back(nums1[i]);
           }
        }
        return ans;
    }
};