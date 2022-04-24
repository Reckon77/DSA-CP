// https://practice.geeksforgeeks.org/problems/bst-to-greater-sum-tree/1/
int sumtree(Node *root)
{
    if (!root)
        return 0;
    return root->data + sumtree(root->left) + sumtree(root->right);
}
void inorder(Node *root, int &sum)
{
    if (!root)
        return;
    inorder(root->left, sum);
    root->data = sum - root->data;
    sum = root->data;
    inorder(root->right, sum);
}
void transformTree(struct Node *root)
{
    // code here
    int allsum = sumtree(root);
    inorder(root, allsum);
}