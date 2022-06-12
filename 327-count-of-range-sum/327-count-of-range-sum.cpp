class Solution {
 private:
    int merge(vector<long long int> &sum,int low,int mid,int high,int lower,int upper)
    {           
        int cnt=0,m=mid+1,n=mid+1;
    for(int i=low; i<=mid; i++)
        {
            while(m <= high && sum[m] - sum[i] < lower)
                m++;
            while(n <= high && sum[n] - sum[i] <= upper) 
                n++;
            cnt += (n-m);
        }
        int n1=mid-low+1,n2=high-mid;
        long long L[n1],R[n2];
        for(int i=0;i<n1;i++)
            L[i]=sum[low+i];
         for(int i=0;i<n2;i++)
            R[i]=sum[mid+1+i];
        int i=0,j=0,k=low;
        while(i<n1 && j<n2)
        {
            if(L[i]<=R[j])
                sum[k++]=L[i++];
            else
                sum[k++]=R[j++];
        }
        while(i<n1)
            sum[k++]=L[i++];
        while(j<n2)
            sum[k++]=R[j++];
        return cnt;
    }
    
    int mergeSort(vector<long long int> &sum,int low,int high,int lower,int upper)
    {
        if(low>=high) return 0;
        int mid =(low+high)/2;
        int cnt=mergeSort(sum,low,mid,lower,upper)+mergeSort(sum,mid+1,high,lower,upper);
        
        cnt+=merge(sum,low,mid,high,lower,upper);
        return cnt;        
    }
public:
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        vector<long long int> sum(n+1,0);
        for(int i=1;i<=n;i++)
        {
            sum[i]=0ll+sum[i-1]+nums[i-1];
        }

        return mergeSort(sum,0,n,lower,upper);
    }
};