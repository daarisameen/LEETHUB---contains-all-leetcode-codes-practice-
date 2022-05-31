class Solution {
public:
    bool isPalindrome(string s) {
        string z="";
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
                z+=tolower(s[i]);
        }
        string x="";
        for(int i=z.length()-1;i>=0;i--)
            x+=z[i];
        if(x==z)
            return true;
        else
            return false;
    }
};