/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void printlvlbylvl(TreeNode* root, int ht, vector<vector<int>>& v)
    {
        if(root==NULL)
            return;
        for(int i=1;i<=ht;i++)
        {
            vector<int>z;
            levelorder(i,z,root);
            v.push_back(z);
        }
    }
    void levelorder(int i,vector<int>& z,TreeNode* root)
    {
        if(root==NULL)
            return;
        if(i==1)
            z.push_back(root->val);
        if(i>1)
        {
            levelorder(i-1,z,root->left);
            levelorder(i-1,z,root->right);
        }
        
    }
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int ht = height(root);
        vector<vector<int>>v;
        printlvlbylvl(root,ht,v);
        return v;
    }
};