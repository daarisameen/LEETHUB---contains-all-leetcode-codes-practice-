class Solution {
public:
    vector<int> getRow(int numRows) {
                vector<vector<int>>v;
        vector<int>z; z.push_back(1);
        
        v.push_back(z);
        
        if(numRows==0)
            return v[v.size()-1];
    
        else
        {
            for(int i=1;i<=numRows;i++)
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
        return v[v.size()-1];
    
    }
};