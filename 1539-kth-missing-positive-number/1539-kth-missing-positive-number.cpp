class Solution
{
    public:
        int findKthPositive(vector<int> &arr, int k)
        {
            int cnt = 0;
            int start = 0, end = arr.size() - 1;
            int ans=arr[arr.size()-1]+(k-(arr[arr.size()-1]-arr.size()));
            while (start <= end)
            {
                int mid = (end - start) / 2 + start;
                cnt = arr[mid] - mid - 1;
                if (k > cnt)
                {
                   	// k=-cnt;
                    start = mid + 1;
                }
                else
                {
                    // cout<<arr[mid]<<" "<<cnt<<" "<<k;
                    end=mid-1;
                    ans = arr[mid] - (cnt - k) - 1;
                }
            }
            return ans;
        }
};