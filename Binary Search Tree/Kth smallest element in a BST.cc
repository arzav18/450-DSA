class Solution {
public:
    int ans;
    void solve(TreeNode*root, int k, int &counter)
    {
        if(!root)
            return;
        solve(root->left,k,counter);
        if(k==counter)
        {
            ans = root->val;
            counter++;
            return;
        }
        else
            counter++;
        solve(root->right,k,counter);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        int counter = 1;
        ans = -1;
        solve(root,k,counter);
        return ans;
    }
};
