class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n+1,0);
        if(n==0)
            return v;
        v[1]=1;
        for(int i=2;i<n+1;i++)
        {
            if(i%2==0)
                v[i]=v[i/2];
            else
                v[i]=1+v[i/2];
        }
        return v;
    }
};