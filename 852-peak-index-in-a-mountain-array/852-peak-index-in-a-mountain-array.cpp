class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0,end=n-1;
        while(start<=end)
        {
            int mid = (end-start)/2 + start;
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;
            if(arr[mid]>=arr[prev] and arr[next]<=arr[mid])
                return mid;
            else if(mid-1>=0 and arr[mid-1]>=arr[mid])
                end=mid-1;
            else 
                start=mid+1;
        }
        return 0;
    }
};