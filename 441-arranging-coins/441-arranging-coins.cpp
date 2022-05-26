class Solution {
public:
    int arrangeCoins(int n) {
        int ans=1;
        int start=1,end=n;
        while(start<=end)
        {
            long long int mid=(end-start)/2+start;
            if(mid*(mid+1)/2>n)
            {
                end=mid-1;
            }
            else
            {
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};