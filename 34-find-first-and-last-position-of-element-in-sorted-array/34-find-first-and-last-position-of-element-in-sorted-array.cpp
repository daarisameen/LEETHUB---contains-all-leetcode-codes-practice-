class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int start=0,end=nums.size()-1;
        while(start<=end)
        {
            int mid=(end-start)/2+start;
            if(nums[mid]>=target)
            {
                if(nums[mid]==target)
                    first=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        start=0,end=nums.size()-1;
        while(start<=end)
        {
            int mid=(end-start)/2+start;
            if(nums[mid]<=target)
            {
                if(nums[mid]==target)
                    last=mid;
                start=mid+1;
            }
            else
                end=mid-1;
        }
        
        vector<int>v(2); v[0]=first, v[1]=last;
        return v;
    }
};