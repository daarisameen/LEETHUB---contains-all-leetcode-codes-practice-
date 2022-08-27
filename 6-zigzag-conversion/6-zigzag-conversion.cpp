class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        vector<vector<char>>v(numRows);
        int z=0,inc=1;
        for(int i=0;i<s.length();i++)
        {
            v[z].push_back(s[i]);
            
            if(z==0)
                inc=1;
            if(z==numRows-1)
                inc=-1;
            
            z+=inc;
            
        }
        string ans;
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                ans+=v[i][j];
            }
        }
        return ans;
    }
};