class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=n;i++)
        {
            int start=0,end=nums.size()-1;
            while(start<=end)
            {
                int mid=(end-start)/2+start;
                if(nums[mid]==i)
                {
                    if(mid>0 and nums[mid-1]==i)
                        return i;
                    else if(mid<nums.size()-1 and nums[mid+1]==i)
                        return i;
                    else
                        break;
                }
                else if(nums[mid]<i)
                    start=mid+1;
                else
                    end=mid-1;
            }
            
        }
        return 0;
    }
};