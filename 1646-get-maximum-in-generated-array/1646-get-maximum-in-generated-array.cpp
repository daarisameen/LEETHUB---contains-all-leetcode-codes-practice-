class Solution {
public:
    int getMaximumGenerated(int n) {
        int mx=0;
        vector<int>v(n+1,-1);
            v[0]=0;
        if(n>=1)
        {
            v[1]=1;
            mx=1;
        }
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
                v[i]=v[i/2];
            else
                v[i]=v[(i-1)/2]+v[(i-1)/2+1];
            mx=max(mx,v[i]);
        }
        return mx;
    }
};