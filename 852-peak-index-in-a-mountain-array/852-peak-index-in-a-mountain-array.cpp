class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans=arr[arr.size()-1];
        int n=arr.size();
        int start=0,end=arr.size()-1;
        while(start<=end)
        {
            int mid=(end-start)/2+start;
            if(mid>0 and mid<n-1)
            {
                if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
                    return mid;
                else if(arr[mid-1]>arr[mid])
                    end=mid-1;
                else
                    start=mid+1;
            }
            else if(mid==0)
            {
                if(arr[0]>arr[1])
                    return 0;
                else
                    return 1;
            }
            else if(mid==n-1)
            {
                if(arr[n-1]>arr[n-2])
                    return n-1;
                else
                    return n-2;
            }
        }
        return -1;
    }
};