void traverse(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    ans.push_back(root->data);
    traverse(root->left, ans);
    traverse(root->right, ans);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    traverse(root, ans);
    return ans;
}