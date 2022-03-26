// https://practice.geeksforgeeks.org/problems/children-sum-parent/1/
int isSumProperty(Node *root)
{
    // Add your code here
    if (!root)
        return 1;
    if (!root->left && !root->right)
        return 1;
    int lc = 0, rc = 0;
    if (root->left)
    {
        lc = root->left->data;
    }
    if (root->right)
    {
        rc = root->right->data;
    }

    return root->data == lc + rc && isSumProperty(root->left) && isSumProperty(root->right);
}