class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>s;
        for(int i=0;i<emails.size();i++)
        {
            string ans="";
            bool flag=false,flag1=false;
            for(int j=0;j<emails[i].size();j++)
            {
                if(emails[i][j]=='.' and !flag1)
                    continue;
                if(emails[i][j]=='@')
                {
                    flag1=true;
                    flag=false;
                }
                if(emails[i][j]=='+' and !flag1)
                    flag=true;
                
                if(flag)
                    continue;
                else
                    ans+=emails[i][j];
            }
            s.insert(ans);
        }
        // for(auto it:s)
        // {
        //     cout<<it<<"\n";
        // }
        return s.size();
    }
};