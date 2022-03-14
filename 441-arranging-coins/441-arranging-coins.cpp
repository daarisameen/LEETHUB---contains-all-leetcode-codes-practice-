/*
    final equation is like a^2 + a - 2*n = 0
    where n is the number of coins.
    
    Here coefficient of b is +1 i.e. sum of roots is +1
    and product of root is -2*n 
    
    only possibility is roots are consecutive like x*(x+1) or (x-1)*x whose product is equal to 2*n
    
    find x using Binary Search.
    
    my linked-in profile(you could ask doubts to me there):         https://www.linkedin.com/in/daaris-ameen-430281214/
    
*/
class Solution {
public:
    int arrangeCoins(int n) {
        long long int start=1,end=n;
        long long int ans=1;
        while(start<=end)
        {
            long long int mid = (end-start)/2 + start;
            if(mid*(mid-1)/2<=n)
            {
                ans=mid-1;
                start=mid+1;
            }
            else
                end=mid-1;
        }
        if(n==1)
            return 1;
        return ans;
    }
};