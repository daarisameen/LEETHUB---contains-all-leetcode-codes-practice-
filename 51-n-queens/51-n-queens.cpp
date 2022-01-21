class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<int> oneResult; 
        vector<vector<string>> ret; 
        backTrac(n, 0, oneResult, ret); 
        return ret; 
    }
    
    void backTrac(int n, int level, vector<int>& oneResult, vector<vector<string>>& ret)
    {
        // start mean row. 
        if(level ==n)
        {
            vector<string> tmp(n);
           for(int i=0; i< n; i++)
           {
               for(int j =0; j< n; j++)
               {
                   if(oneResult[i]==j)
                       tmp[i].push_back('Q'); 
                   else
                       tmp[i].push_back('.');
               }
           }
           ret.push_back(tmp);  
            return; 
        }                        
        for(int i=0; i< n; i++)
        {
            if(canPutQueue(oneResult, i))
            {
                oneResult.push_back(i); 
                backTrac(n, level+1, oneResult, ret); 
                oneResult.pop_back(); 
            }
            
        }                
    }
    bool canPutQueue(vector<int>& oneResult, int pos)
    {
        int row = oneResult.size(); 
        // col i 
        // col can't be same. 
        for(int i=0; i< oneResult.size(); i++)
        {
            if(pos == oneResult[i])
                return false; 
        }
        //  diag
        for(int i=0; i< oneResult.size(); i++) // [i  oneResult[i]]
        {
            int icol = oneResult[i] +(row - i); 
            if(icol ==pos)
                return false; 
        }
        // 
        for(int i=oneResult.size()-1; i>=0 ; i--)
        {
            int icol = oneResult[i] - (row -i); 
            if(icol ==pos)
                return false; 
        }
        return true;         
    }
};