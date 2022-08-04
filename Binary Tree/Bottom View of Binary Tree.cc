class Solution{
  public:
      vector <int> bottomView(Node *root)
      {
          vector<int> ans;
          map<int,int> mpp;
          queue<pair<Node*, int>> q;
          if(root==NULL) return ans;
          q.push({root,0});
          while(!q.empty())
          {
              auto it = q.front();
              q.pop();
              Node* node = it.first;
              int line = it.second;
              mpp[line] = node->data;
              if(node->left!=NULL)
              {
                  q.push({node->left, line-1});
              }
              if(node->right!=NULL)
              {
                  q.push({node->right, line+1});
              }
          }
          for(auto it: mpp)
          {
              ans.push_back(it.second);
          }
          return ans;
      }
};

 // Your Code Here (submitted 100%)
        // map<int,int>m;
        // vector<int>ans;
        // if(!root) return ans;
        // queue<pair<Node*, int>>q;
        // q.push({root,0});
        // while(!q.empty()){
        //     Node* temp = q.front().first;
        //     int k = q.front().second;
        //     m[k] = temp->data;
        //     q.pop();
        //     if(temp->left) q.push({temp->left,k-1});
        //     if(temp->right) q.push({temp->right,k+1});
        // }
        // for(auto x: m) ans.push_back(x.second);
        // return ans;


// class Solution {
//   public:
//     vector <int> bottomView(Node *root) 
//     {
//       vector<int>ans;
//       if(root==NULL) return ans;
//       map<int,int>mp;
//       queue<pair<Node*,int>>q;
//       q.push({root,0});
//       while(!q.empty()){
//           auto it=q.front();
//           q.pop();
//           Node *node=it.first;
//           int line=it.second;
//           mp[line]=node->data;
//           if(node->left)q.push({node->left,line-1});
//           if(node->right)q.push({node->right,line+1});
//       }
//       for(auto it:mp){
//           ans.push_back(it.second);
//       }
//       return ans;
//   }
//         // Your Code Here
    
// };
