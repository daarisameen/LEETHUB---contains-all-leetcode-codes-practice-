class Solution {
public:
    int mySqrt(int x) {
        int start=1, end=x;
        if(x==0)
            return 0;
        if(x==1)
            return 1;
        int ans=1;
        while(start<=end)
        {
            int mid=(end-start)/2+start;
            if(mid==x/mid)
                return mid;
            if(mid<x/mid)
            {
                ans=mid;
                start=mid+1;
            }
            else
                end=mid-1;
        }
        return ans;
    }
};