class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>row;set<int>col;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row.insert(i); col.insert(j);
                }
            }
        }
        int a=matrix.size();
        int b=matrix[0].size();
        vector<vector<int>>v(a,vector<int>(b,1));
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(row.find(i)!=row.end())
                    v[i][j]=0;
                else if(col.find(j)!=col.end())
                    v[i][j]=0;
                else 
                    v[i][j]=matrix[i][j];
                
            }
        }
        matrix=v;
    }
};