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
    
    void inorder(TreeNode* root,vector<int>&v1)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left!=NULL and root->right==NULL)
            root->right=new TreeNode(1000);
        if(root->left==NULL and root->right!=NULL)
            root->left=new TreeNode(1000);
        inorder(root->left,v1);
        v1.push_back(root->val);
        inorder(root->right,v1);
    }
    bool isSymmetric(TreeNode* root) {
        vector<int>v1,v2;
        if(root==NULL)
            return true;
        if(root->left==NULL and root->right==NULL)
            return true;
        if(root->left==NULL || root->right==NULL)
            return false;
        if(root->left->val!=root->right->val)
            return false;
        inorder(root,v1);
        // if(v1.size()%2==0)
        //     return false;
        for(int i=0;i<v1.size()/2;i++)
        {
            if(v1[i]!=v1[v1.size()-1-i])
                return false;
            // cout<<v1[i]<<" "<<v1[v1.size()-i-1]<<endl;
        }
        return true;
    }
};