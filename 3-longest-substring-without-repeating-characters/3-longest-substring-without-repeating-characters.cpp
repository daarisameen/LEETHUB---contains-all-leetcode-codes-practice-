class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        for(int i=0;i<s.length();i++)
        {
            map<int,int>mp;int le=0;
            for(int j=i;j<s.length();j++)
            {
                if(mp[s[j]])
                    break;
                mp[s[j]]=1;
                le++;
                len=max(len,le);
            }
        }
        return len;
    }
};