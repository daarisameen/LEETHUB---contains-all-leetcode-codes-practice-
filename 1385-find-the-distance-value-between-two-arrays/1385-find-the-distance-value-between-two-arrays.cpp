class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int cnt=0;
        for(int i=0;i<arr1.size();i++)
        {
            bool flag=false;
            int l=arr1[i]-d;
            int r=arr1[i]+d;
            // cout<<l<<" "<<r<<endl;
            int start=0,end=arr2.size()-1;
            while(start<=end)
            {
                int mid=(end-start)/2+start;
                if(l<=arr2[mid] and arr2[mid]<=r)
                {
                    // cout<<arr2[mid]<<" hi";
                    flag=true;
                    break;
                }
                else if(arr2[mid]>r)
                    end=mid-1;
                else if(arr2[mid]<l)
                    start=mid+1;
            }
            if(flag)
                continue;
            cnt++;
        }
        return cnt;
    }
};