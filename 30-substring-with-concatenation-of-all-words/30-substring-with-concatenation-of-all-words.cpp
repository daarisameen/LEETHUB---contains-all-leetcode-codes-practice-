class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
       unordered_map<string, int> mp;
    
    vector<int> ans;
    
    for(auto x: words)
    {
        mp[x]++;
    }
    
    int i,j,m = s.size(),n = words.size(),len = words[0].size();
    
    for(i=0; i<= m-n*len; i++)
    {
        unordered_map<string, int> seen; 
        
        for(j=0; j<n; j++)
        {
            string res = s.substr(i+j*len, len);
            
            if(mp.find(res) != mp.end())
            {
                seen[res]++;
                
                if(seen[res] > mp[res])
                {
                    break;
                }
            }
            
            else
            {
                break;
            }
        }
        
        if(j == n)
        {
            ans.push_back(i);
        }
    }
    
    return ans;
    

    }
};