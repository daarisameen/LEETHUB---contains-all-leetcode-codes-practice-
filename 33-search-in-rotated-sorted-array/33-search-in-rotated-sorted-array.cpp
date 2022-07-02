class Solution {
public:
    int search(vector<int>& nums, int target) {
        // find minimum element
        int pos_min = 0;
        int n=nums.size(),start=0,end=n-1;
        while(start<=end)
        {
            int mid=(end-start)/2+start;
            int next=(mid+1)%n;
            int prev=(n+mid-1)%n;
            
            if(nums[mid]<nums[prev] and nums[mid]<nums[next])
            {
                pos_min=mid;
                break;
            }
            if(nums[mid]>nums[end])
                start=mid+1;
            else
                end=mid-1;
        }

        if(target>=nums[pos_min] and target<=nums[n-1])
        {
            start=pos_min,end=n-1;
            while(start<=end)
            {
                int mid=(end-start)/2+start;
                if(nums[mid]==target)
                    return mid;
                if(nums[mid]>target)
                    end=mid-1;
                else
                    start=mid+1;
            }
            return -1;
        }
        else
        {
            start=0,end=pos_min-1;
            while(start<=end)
            {
                int mid=(end-start)/2+start;
                if(nums[mid]==target)
                    return mid;
                if(nums[mid]>target)
                    end=mid-1;
                else
                    start=mid+1;
            }
            return -1;
        }
        return 0;
    }
};