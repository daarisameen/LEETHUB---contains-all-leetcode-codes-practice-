class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        vector<int>z; z.push_back(1);
        
        v.push_back(z);
        
        if(numRows==1)
            return v;
    
        else
        {
            for(int i=1;i<=numRows-1;i++)
            {
                vector<int>zzz;
                zzz.push_back(1);
                for(int j=0;j<v[i-1].size()-1;j++)
                {
                    zzz.push_back(v[i-1][j]+v[i-1][j+1]);
                }
                zzz.push_back(1);
                v.push_back(zzz);
            }
        }
        return v;
    }
};