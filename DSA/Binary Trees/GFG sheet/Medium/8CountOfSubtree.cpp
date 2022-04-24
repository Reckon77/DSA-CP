// https://practice.geeksforgeeks.org/problems/single-valued-subtree/1/
int traverse(Node *r, int &count)
{
    if (r == NULL)
    {
        return 1;
    }
    int left = traverse(r->left, count);
    int right = traverse(r->right, count);
    if (left == 0 || right == 0)
    {
        return 0;
    }
    if (r->left && r->data != r->left->data)
    {
        return 0;
    }
    if (r->right && r->data != r->right->data)
    {
        return 0;
    }
    count++;
    return 1;
}
int singlevalued(Node *root)
{
    // code here
    int count = 0;
    traverse(root, count);
    return count;
}