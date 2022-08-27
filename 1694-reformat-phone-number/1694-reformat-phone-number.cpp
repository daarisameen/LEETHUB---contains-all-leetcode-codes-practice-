class Solution {
public:
    string reformatNumber(string number) {
        string s="";
        for(int i=0;i<number.length();i++)
        {
            if(number[i]==' ' || number[i]=='-')
                continue;
            s+=number[i];
        }
        // cout<<s;
        int len=s.length(), rem=len%3;
        if(rem==1)
        {
            int ans=(len/3)-1;
            string ss="";
            for(int i=0;ans>0;i+=3,ans--)
            {
                ss+=s.substr(i,3);
                ss+="-";
            }
            ss+=s.substr(s.length()-4,2)+"-"+s.substr(s.length()-2,2);
            return ss;
        }
        if(rem==2)
        {
            int ans=(len/3);
            string ss="";
            for(int i=0;ans>0;i+=3,ans--)
            {
                ss+=s.substr(i,3);
                ss+="-";
            }
            ss+=s.substr(s.length()-2,2);
            return ss;
        }
        if(rem==0)
        {
            int ans=(len/3);
            string ss="";
            for(int i=0;ans>0;i+=3,ans--)
            {
                ss+=s.substr(i,3);
                if(ans!=1)
                ss+="-";
            }
            // ss+=s.substr(s.length()-2,2);
            return ss;
        }
        return "Hi";
    }
};