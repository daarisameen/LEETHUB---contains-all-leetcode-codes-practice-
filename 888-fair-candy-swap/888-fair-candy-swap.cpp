// sum of aliceSizes = A, sum of bobSizes = B
// A-x+y = B-y+x
// (A-B+2*y)/2 = x 
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        sort(aliceSizes.begin(),aliceSizes.end());
        sort(bobSizes.begin(),bobSizes.end());
        int A=0,B=0;
        vector<int>ans;
        for(int i=0;i<aliceSizes.size();i++)
            A += aliceSizes[i];
        
        for(int i=0;i<bobSizes.size();i++)
            B += bobSizes[i];
        
        for(int i=0;i<aliceSizes.size();i++)
        {
            vector<int>v;
            int z=(B-A+2*aliceSizes[i])/2;
            v.push_back(aliceSizes[i]);
            int start=0,end=bobSizes.size()-1;
            while(start<=end)
            {
                int mid=(end-start)/2 + start;
                if(bobSizes[mid]==z)
                {
                    v.push_back(z);
                    return v;
                }
                if(bobSizes[mid]<z)
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        return ans;
    }
};