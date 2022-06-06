void traverse(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    traverse(root->left, ans);
    ans.push_back(root->data);
    traverse(root->right, ans);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    traverse(root, ans);
    return ans;
}