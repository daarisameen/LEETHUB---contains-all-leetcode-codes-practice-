class Solution
{
    public:
        int romanToInt(string s)
        {
            map<string, int> mp;
            mp["I"] = 1, mp["V"] = 5, mp["X"] = 10, mp["L"] = 50, mp["C"] = 100, mp["D"] = 500, mp["M"] = 1000, mp["IX"] = 9, mp["IV"] = 4, mp["XL"] = 40, mp["XC"] = 90, mp["CD"] = 400, mp["CM"] = 900;
            int sum = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if (i != s.length() - 1)
                {
                    string ans="";
                    ans+=s[i];
                    ans+=s[i+1];
                    if (mp[ans])
                    {
                        sum += mp[ans];
                        i++;
                    }
                    else
                    {
                        string ans="";
                        ans+=s[i];
                        sum += mp[ans];
                    }
                }
                else
                {
                    string ans="";
                    ans+=s[i];
                    sum += mp[ans];
                }
                // cout<<to_string(s[i]);
            }
            return sum;
        }
};