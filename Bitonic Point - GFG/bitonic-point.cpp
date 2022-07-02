// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int start=0,end=n-1;
	    if(n==1)
	    return arr[0];
	    while(start<=end)
	    {
	        int mid=(end-start)/2+start;
	        if(mid>0 and mid<n-1)
	        {
	            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
	            return arr[mid];
	            else if(arr[mid+1]>arr[mid-1])
	            start=mid+1;
	            else
	            end=mid-1;
	        }
	        if(mid==0)
	        {
	            if(arr[mid]>arr[mid+1])
	            return arr[mid];
	            else
	            return arr[mid+1];
	        }
	        if(mid==n-1)
	        {
	            if(arr[mid]>arr[mid-1])
	            return arr[mid];
	            else
	            return arr[mid-1];
	        }
	    }
	    return -1;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends