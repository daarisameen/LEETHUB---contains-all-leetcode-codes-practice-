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
    int solve(TreeNode* root,int& res)
    {
        // base condition
        if(root==NULL)
            return 0;
        // hypothesis
        int l= solve(root->left,res);
        int r= solve(root->right,res);
        //induction step
        int temp = 1+max(l,r);
        int ans = max(temp,1+l+r);
        res=max(ans,res);
        return temp;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res=INT_MIN;
        int c=solve(root,res);
        return res-1;
    }
};