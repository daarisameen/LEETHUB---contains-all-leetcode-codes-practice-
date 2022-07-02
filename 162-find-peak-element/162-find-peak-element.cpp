// Binary Search on answer concept - BSA
//     1. Applicable on unsorted array.
//     2. criteria is needed to check whether mid is the answer.
//     3. criteria is needed to move the array left of right.

class Solution
{
    public:
        int findPeakElement(vector<int> &nums)
        {
            int n = nums.size(), start = 0, end = n - 1;
            if(n==1)
                return 0;
            while (start <= end)
            {
                int mid = (end - start) / 2 + start;
                if (mid > 0 and mid < n - 1)
                {
                    if (nums[mid] > nums[mid - 1] and nums[mid] > nums[mid + 1])
                        return mid;
                    else if (nums[mid + 1] > nums[mid - 1])
                        start = mid + 1;
                    else
                        end = mid - 1;
                }
                if (mid == 0)
                {
                    if (nums[mid] > nums[mid+1])
                        return mid;
                    else
                        return mid + 1;
                }
                if (mid == n - 1)
                {
                    if (nums[mid] > nums[mid-1])
                        return mid;
                    else
                        return mid - 1;
                }
            }
            return -1;
        }
};