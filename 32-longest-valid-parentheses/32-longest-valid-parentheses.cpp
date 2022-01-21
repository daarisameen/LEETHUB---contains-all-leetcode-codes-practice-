

class Solution {
public:
    int longestValidParentheses(string s)
    {
        int sz = s.size();
        stack<pair<char, int>> scan;
        for (auto i = 0; i < sz; i++)
        {
            if (s[i] == '(')
                scan.push(make_pair(s[i], i));
            else if (!scan.empty() && scan.top().first == '(')
                scan.pop();
            else
                scan.push(make_pair(s[i], i));
        }
        
        int max_sub = 0, right = sz-1;
        while (!scan.empty())
        {
            int left = scan.top().second;
            max_sub = max(max_sub, right-left);
            right = left - 1;
            scan.pop();
        }
        max_sub = max(max_sub, right+1);
        return max_sub;
    }
};
