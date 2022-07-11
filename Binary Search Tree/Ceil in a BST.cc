class Solution{
public:
  int findCeil(Node<int> *root, int key)
  {
    int ceil = -1;
    while(root)
    {
      if(root->val == key)
      {
        ceil = root->val;
        return ceil;
      }
      else if(root->val>key)
        root = root->left;
      else
        root=root->right
    }
    return ceil;
  }
};
