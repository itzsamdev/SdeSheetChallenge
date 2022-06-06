
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> ans;
    queue<BinaryTreeNode<int> *> q;
    if (root == NULL)
        return ans;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *node = q.front();
        ans.push_back(node->val);
        q.pop();
        if (node->left)
        {
            q.push(node->left);
        }
        if (node->right)
        {
            q.push(node->right);
        }
    }
    return ans;
}