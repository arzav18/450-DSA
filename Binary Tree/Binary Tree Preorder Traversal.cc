class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int> v;
        preOrder(root,v);
        return v;
    }
    
    void preOrder(TreeNode* root, vector<int> &v)
    {
        if(root != NULL)
        {
            v.push_back(root->val);
            preOrder(root->left,v);
            preOrder(root->right,v);
        }
        return;
    }
};


// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) 
//     {
//         vector<int> preorder;
//         TreeNode* curr= root;
//         while(curr!=NULL)
//         {
//             if(curr->left==NULL)
//             {
//                 preorder.push_back(curr->val);
//                 curr=curr->right;
//             }
//             else
//             {
//                 TreeNode* prev = curr->left;
//                 while(prev->right && prev->right!=curr)
//                 {
//                     prev = prev->right;
//                 }
//                 if(prev->right==NULL)
//                 {
//                     prev->right = curr;
//                     preorder.push_back(curr->val);
//                     curr=curr->left;
//                 }
//                 else
//                 {
//                     prev->right=NULL;
//                     curr=curr->right;
//                 }
//             }
//         }
//         return preorder;
//     }
// };
