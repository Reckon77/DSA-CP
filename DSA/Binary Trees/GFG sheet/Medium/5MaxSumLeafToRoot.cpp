// https://practice.geeksforgeeks.org/problems/maximum-sum-leaf-to-root-path/1/
int maxPathSum(Node *root)
{
    // code here
    if (!root)
        return 0;
    return max(root->data + maxPathSum(root->left), root->data + maxPathSum(root->right));
}