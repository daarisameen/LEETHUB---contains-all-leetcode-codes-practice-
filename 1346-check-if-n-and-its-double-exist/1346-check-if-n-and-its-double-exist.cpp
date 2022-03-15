class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2!=0 || arr[i]==0)
                continue;
            int start=0,end=arr.size()-1;
            while(start<=end)
            {
                int mid=(end-start)/2 + start;
                if(arr[mid]==arr[i]/2)
                    return true;
                if(arr[mid]<arr[i]/2)
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        if(arr[0]==0 and arr[1]==0)
            return true;
        return false;
    }
};