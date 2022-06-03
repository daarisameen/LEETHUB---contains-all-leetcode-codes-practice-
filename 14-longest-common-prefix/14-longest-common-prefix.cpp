class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        map<int,char>mp;
        if(strs.size()==1)
            return strs[0];
        string z="";
        int l=INT_MAX;
        for(int i=0;i<strs[0].length();i++)
        {
            mp[i]=strs[0][i];
        }
        // for(auto i:mp)
        // {
        //     cout<<i.first<<" ";
        // }
        // cout<<strs.size();
        int m=strs[0].length();
        for(int i=1;i<strs.size();i++)
        {
            // m=min(m,strs[i].length());
            if(m>strs[i].length())
                m=strs[i].length();
            // cout<<m;
            for(int j=0;j<strs[i].length();j++)
            {
                // cout<<j<<" ";
                    if(i==strs.size()-1)
                    {
                        if(j<l and j<m)
                        {
                            if(mp[j]==strs[i][j])
                            {
                                z+=mp[j];
                            }
                            else
                                break;
                        }
                    }
                    else
                    {
                        
                        if(mp[j]!=strs[i][j] and l==INT_MAX)
                        {
                            l=j;cout<<l;
                            
                        }
                    }
                
            }
        }
        if(strs.size()==1)
            return strs[0];
        else
        return z;
    }
};


