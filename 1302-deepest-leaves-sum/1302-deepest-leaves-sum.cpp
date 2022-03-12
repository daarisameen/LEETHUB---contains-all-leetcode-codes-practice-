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
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void last_lvl_sum(TreeNode* root,int& sum,int ht)
    {
        if(root==NULL)
            return;
        if(ht==1)
            sum+=root->val;
        if(ht>1)
        {
            last_lvl_sum(root->left,sum,ht-1);
            last_lvl_sum(root->right,sum,ht-1);
        }
    }
    int deepestLeavesSum(TreeNode* root) {
        int ht = height(root);
        int sum=0;
        last_lvl_sum(root,sum,ht);
        return sum;
    }
};