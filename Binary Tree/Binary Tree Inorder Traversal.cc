class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> v;
        inOrder(root,v);
        return v;
    }
    
    void inOrder(TreeNode* root, vector<int> &v)
    {
        if(root != NULL)
        {
            inOrder(root->left,v);
            v.push_back(root->val);
            inOrder(root->right,v);
        }
        return;
    }
};


// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root)
//     {
//         vector<int> inorder;
//         TreeNode* curr = root;
//         while(curr!=NULL)
//         {
//             if(curr->left==NULL)
//             {
//                 inorder.push_back(curr->val);
//                 curr=curr->right;
//             }
//             else
//             {    
//                 TreeNode* prev = curr->left;
//                 while(prev->right && prev->right!=curr)
//             {
//                 prev = prev->right;
//             }
//             if(prev->right == NULL)
//             {
//                 prev->right=curr;
//                 curr=curr->left;
//             }
//             else
//             {
//                 prev->right=NULL;
//                 inorder.push_back(curr->val);
//                 curr=curr->right;
//             }

//             }
//         }
//         return inorder;
//     }
// };

// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root)
//     {
//         TreeNode* curr = root;
//         vector<int> inOrder;
//         while(curr!=NULL)
//         {
//             if(curr->left==NULL)
//                 inOrder.push_back(root->val);
//                 curr = curr->right;
        
//         TreeNode* prev = curr->left;
//         while(prev->right && prev->right!=NULL)
//         {
//             prev=prev->right;
//         }
//         if(prev->right==NULL)
//         {
//             prev->right=curr;
//             curr=curr->left;
//         }
//         else
//         {
//             prev->right=NULL;
//             inOrder.push_back(curr->val);
//             curr=curr->right;
//         }
//         }
//         return inOrder;
//     }
// };
