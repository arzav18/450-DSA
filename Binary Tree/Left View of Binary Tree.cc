void f(Node* root, int level, vector<int> &res)
{
    if(root==NULL) return;
    if(res.size()==level) res.push_back(root->data);
    f(root->left, level+1, res);
    f(root->right, level+1, res);
}
vector<int> leftView(Node* root)
{
    vector<int> res;
    f(root, 0, res);
    return res;
}
