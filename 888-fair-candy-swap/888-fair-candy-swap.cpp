class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int A=0,B=0;
        for(int i=0;i<aliceSizes.size();i++)
        {
            A+=aliceSizes[i];
        }
        for(int i=0;i<bobSizes.size();i++)
        {
            B+=bobSizes[i];
        }
        sort(bobSizes.begin(),bobSizes.end());
        for(int i=0;i<aliceSizes.size();i++)
        {
            int x=aliceSizes[i];
            vector<int>v;
            v.push_back(x);
            int y=(B-A)/2+x;
            if(y<=0)
                continue;
            int start=0,end=bobSizes.size()-1;
            while(start<=end)
            {
                int mid=(end-start)/2+start;
                if(bobSizes[mid]==y)
                {
                    v.push_back(y);
                    return v;
                }
                if(bobSizes[mid]<y)
                {
                    start=mid+1;
                }
                else
                    end=mid-1;
            }
        }
        vector<int>v;
        return v;
    }
};