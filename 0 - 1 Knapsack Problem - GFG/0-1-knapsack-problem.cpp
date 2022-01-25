// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       // Your code here
       int t[w+1][n+1];
       memset(t,0,sizeof(t));
       for(int i=0;i<w+1;i++)
       {
           for(int j=0;j<n+1;j++)
           {
               if(i==0 || j==0)
               t[i][j]=0;
           }
       }
       for(int i=1;i<w+1;i++)
       {
           for(int j=1;j<n+1;j++)
           {
               if(wt[j-1]<=i)
               t[i][j]=max(val[j-1]+t[i-wt[j-1]][j-1],t[i][j-1]);
               else
               t[i][j]=t[i][j-1];
           }
       }
       return t[w][n];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends