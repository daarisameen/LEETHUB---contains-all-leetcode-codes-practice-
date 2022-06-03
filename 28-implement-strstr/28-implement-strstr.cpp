class Solution {
public:
    int strStr(string h, string n) {
        if(h.length()<n.length())
            return -1;
        string window="";
        window=h.substr(0,n.length());
        int index=0;
        // cout<<window;
        for(int i=0;i<h.length()-n.length()+1;i++)
        {
            if(window==n)
                return index;
            else
            {
                index++;
                window=h.substr(index,n.length());
            }
        }
        return -1;
    }
};