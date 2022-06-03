class Solution {
public:
    void solve(vector<vector<int>>& matrix,int i,int j)
    {
        if(i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size())
            return;
        matrix[i][j]=0;
        solve(matrix,i-1,j);
        solve(matrix,i+1,j);
        solve(matrix,i,j-1);
        solve(matrix,i,j+1);
    }
    void setZeroes(vector<vector<int>>& matrix) {
        map<int,int>row;map<int,int>col;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(auto i:row)
        {
            for(int j=0;j<matrix[0].size();j++)
                matrix[i.first][j]=0;
        }
        
        for(auto j:col)
        {
            for(int i=0;i<matrix.size();i++)
                matrix[i][j.first]=0;
        }
        
    }
};