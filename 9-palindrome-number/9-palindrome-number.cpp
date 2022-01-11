class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else
        {
            string s=to_string(x);
            string z=s;
            reverse(s.begin(),s.end());
            if(z==s)
                return true;
            else return false;
        }
    }
};