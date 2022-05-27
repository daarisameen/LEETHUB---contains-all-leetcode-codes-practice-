class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int pos=0;
        while(start<=end)
        {
            int mid=(end-start)/2+start;
            if(target==nums[mid])
            {
                return mid;
            }
            else if(target<nums[mid])
            {
                end=mid-1;
            }
            else
                start=mid+1;
                
        }
        return start;
    }
};