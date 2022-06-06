#include <bits/stdc++.h>

bool searchInBST(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;
    if (x < root->data)
    {
        searchInBST(root->left, x);
    }
    else
    {
        searchInBST(root->right, x);
    }
}