class Solution {
public:
    int mySqrt(int x) {
        
        int ans=0;
        int start=1,end=x;
        while(start<=end)
        {
            int mid = (end-start)/2 + start;
            
            if(mid<=x/mid)
            {
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
                
        }
        return ans;
    }
};