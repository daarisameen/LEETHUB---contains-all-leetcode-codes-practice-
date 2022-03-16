class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int count=0;
        for(int i=0;i<arr1.size();i++)
        {
            int ans=0;
            int start=0,end=arr2.size()-1;
            while(start<=end)
            {
                int mid=(end-start)/2 + start;
                if(arr2[mid]<=arr1[i])
                {
                    ans=mid;
                    if((mid+1)<arr2.size() and abs(arr2[mid+1]-arr1[i])<abs(arr2[mid]-arr1[i]))
                        ans=mid+1;
                    start=mid+1;
                }
                else 
                    end=mid-1;
            }

            if(abs(arr2[ans]-arr1[i])>d)
                count++;
        }
        return count;
    }
};