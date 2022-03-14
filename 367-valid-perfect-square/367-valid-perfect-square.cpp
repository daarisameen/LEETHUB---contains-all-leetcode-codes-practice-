class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int start=1,end=num;
        if(num==0)
            return true;
        while(start<=end)
        {
            long long int mid = (end-start)/2 + start;
            if(mid*mid==num)
            {
                return true;
            }
            else if(mid*mid<num)
                start=mid+1;
            else
                end=mid-1;
        }
        return false;
    }
};