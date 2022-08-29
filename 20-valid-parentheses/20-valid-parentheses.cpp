class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                st.push(s[i]);
            else
            {
                if(st.empty())
                    return false;
                char ch=st.top();
                st.pop();
                if((ch=='(' and s[i]==')') || (ch=='[' and s[i]==']') || (ch=='{' and s[i]=='}'))
                    continue;
                else
                    return false;
            }
        }
        
        return st.size()==0;
    }
};