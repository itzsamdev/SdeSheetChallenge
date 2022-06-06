void intraverse(BinaryTreeNode<int> *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    intraverse(root->left, ans);
    ans.push_back(root->data);
    intraverse(root->right, ans);
}
void pretraverse(BinaryTreeNode<int> *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    ans.push_back(root->data);
    pretraverse(root->left, ans);
    pretraverse(root->right, ans);
}
void posttraverse(BinaryTreeNode<int> *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    posttraverse(root->left, ans);
    posttraverse(root->right, ans);
    ans.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root)
{
    vector<vector<int>> ans;
    vector<int> pre, post, in;
    intraverse(root, in);
    pretraverse(root, pre);
    posttraverse(root, post);
    ans.push_back(in);
    ans.push_back(pre);
    ans.push_back(post);
    return ans;
}