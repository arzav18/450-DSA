class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        map<int,map<int,multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int,int>>> todo;
        todo.push({root,{0,0}});
        while(!todo.empty())
        {
            auto it = todo.front();
            todo.pop();
            TreeNode* node = it.first;
            int x = it.second.first, y = it.second.second;
            nodes[x][y].insert(node->val);
            if(node->left)
            {
                todo.push({node->left, {x-1, y+1}});
            }
            if(node->right)
            {
                todo.push({node->right, {x+1, y+1}});
            }
        }
        
        vector<vector<int>> ans;
        for(auto it: nodes)
        {
            vector<int> col;
            for(auto q: it.second)
            {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};
