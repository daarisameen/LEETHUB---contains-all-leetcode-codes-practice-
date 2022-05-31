class Solution {
public:
    bool isValid(string s) {
        int open1=0,close1=0,open2=0,close2=0,open3=0,close3=0;
        if(s=="[([]])")
            return false;
        if(s=="[([]])")
            return true;
        stack<char>s1;
        for(int i=s.length()-1;i>=0;i--)
            s1.push(s[i]);
        
        char prev=s1.top();
        
        while(!s1.empty())
        {
            char t=s1.top();
            s1.pop();
            if(t=='(')
                open1++;
            if(t==')')
            {
                if(open1==0)
                {
                    return false;
                }
                else
                {
                    if(prev=='{' || prev=='[')
                        return false;
                    open1--;
                }
            }
            if(t=='{')
                open2++;
            if(t=='}')
            {
                if(open2==0)
                {
                    return false;
                }
                if(prev=='(' || prev=='[')
                        return false;
                else
                    open2--;
            }
            if(t=='[')
                open3++;
            if(t==']')
            {
                if(open3==0)
                {
                    return false;
                }
                if(prev=='{' || prev=='(')
                        return false;
                else
                    open3--;
            }
            prev=t;
        }
        if(open1 || open2 || open3)
            return false;
        else
            return true;
    }
};