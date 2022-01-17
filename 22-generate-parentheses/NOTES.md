Generate Parentheses using recursion:
​
class Solution {
public:
void generateAll(int n, int open, int close, vector<string>&v, string s)
{
if(open>n || close>n || close>open)
return;
if(open==n && close==n)
{
v.push_back(s);
return;
}
generateAll(n, open+1, close, v, s+'(');
generateAll(n, open, close+1, v, s+')');
return;
}
vector<string> generateParenthesis(int n) {
vector<string>v;
generateAll(n, 0, 0, v, "");
return v;
}
};
​