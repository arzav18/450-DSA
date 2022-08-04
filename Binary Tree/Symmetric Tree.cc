class Solution {
public:
    bool check(TreeNode* leftSide, TreeNode* rightSide)
    {
        if(leftSide==NULL && rightSide==NULL) return true;
        if(leftSide==NULL || rightSide==NULL) return false;
        if(leftSide->val != rightSide->val) return false;
        return check(leftSide->left, rightSide->right) && check(leftSide->right, rightSide->left);
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
        
    }
};
