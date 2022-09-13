class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag=true;
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]))
            {
                if(!flag)
                    cnt=0;
                cnt+=1;
                flag=true;
            }
            if(s[i]==' ')
                flag=false;
        }
        return cnt;
    }
};