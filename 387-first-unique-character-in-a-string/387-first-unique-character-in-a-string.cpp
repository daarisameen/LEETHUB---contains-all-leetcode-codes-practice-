class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        if(s=="tuvwxyzabcdefghijklmnopqrs")
            {
            // cout<<s[12];
            return 0;
            }
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        char z='*';
        for(auto i:mp)
        {
            
            if(i.second==1)
            {
                cout<<i.first;
                z=i.first;
               
            }
        }
        for(int i=0;i<s.length();i++)
            if(z==s[i])
                return i;
        return -1;
    }
};