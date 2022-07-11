class Solution{
  public:
  TreeNode* subTree(TreeNode* root, int val)
  {
    if(root==NULL) return NULL;
    else if(root->val==val) return root;
    else if(root->val>val) return subTree(root->left, val);
    else return subTree(root->right, val);
  }
};
