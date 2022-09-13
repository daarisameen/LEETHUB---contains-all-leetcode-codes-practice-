struct Node{
  Node* links[26];
    bool flag=false;
    int cntstartswith=0;
    Node* get(char ch)
    {
        return links[ch-'a'];
    }
    void put(char ch, Node* node)
    {
        links[ch-'a']=node;
    }
    bool containkey(char ch)
    {
        return links[ch-'a']!=NULL;
    }
    void setend()
    {
        flag=true;
    }
    void increaseprefix()
    {
        cntstartswith++;
    }
    int cntprefix()
    {
        return cntstartswith;
    }
};
class Trie{
    public:
    Node* root;
    Trie()
    {
        root=new Node();
    }
    void insert(string word)
    {
        Node* node = root;
        for(int i=0;i<word.length();i++)
        {
            if(!node->containkey(word[i]))
            {
                node->put(word[i], new Node());
            }
            node=node->get(word[i]);
            node->increaseprefix();
        }
        // node->setend();
    }
    int longestcommonprefix(string word)
    {
        Node* node = root;
        for(int i=0;i<word.length();i++)
        {
            if(node->containkey(word[i]))
            {
               node=node->get(word[i]); 
            }
            else
                return 0;
        }
        return node->cntprefix();
    }
    bool prefixcheck(string word)
    {
        Node* node = root;
        for(int i=0;i<word.length();i++)
        {
            if(node->containkey(word[i]))
            {
               node=node->get(word[i]); 
            }
            else
                return false;
        }
        return true;
    }
    
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        Trie T;
        for(int i=0;i<strs.size();i++)
        {
            T.insert(strs[i]);
        }
        string ans="";
        bool flag=false;
        for(int i=0;i<strs[0].length();i++)
        {
            ans+=strs[0][i];
            if(T.longestcommonprefix(ans)!=strs.size())
            {
                flag=true;
                break;
            }
        }
        // if(strs.size()==1)
        //     return strs[0];
        // cout<<T.prefixcheck(strs[0])<<" ";
        if(flag)
        return ans.substr(0,ans.size()-1);
        else
            return ans;
    }
};
