class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        // Approach - Rearrange all elements of the nums array such that a[i]==i.
        // Then traverse array from left and find first a[i]!=i.If all a[i]==i ans is n+1
        // To rearrange array
        // Swap a[i] with a[a[i]] until a[i]==i || a[i]<=0 || a[i]>n
        // Eg arr={3,1,2} Rearranging will happen in following way:
        // {3,1,2}->{2,1,3}     a[1]!=1 -> swap(a[1],a[a[1]]) -> swap(3,2)
        // {2,1,3}->{1,2,3}     a[1]!=1 -> swap(a[1],a[a[1]]) -> swap(2,1)
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                while(nums[i]>0 && nums[i]!=i+1 && nums[i]<n){
                    if(nums[i]==nums[nums[i]-1])break;
                    swap(nums[i],nums[nums[i]-1]);   
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                ans=i+1;break;
            }
        int ans1=0;
        }
        if(ans==0)ans=n+1;
        return ans;
    }
};