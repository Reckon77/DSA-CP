// https://practice.geeksforgeeks.org/problems/construct-tree-from-preorder-traversal/1/
struct Node *helper(int n, int pre[], char preLN[], int &i)
{
    if (i >= n)
        return NULL;
    Node *newNode = new Node(pre[i]);
    if (preLN[i] != 'L')
    {
        i++;
        newNode->left = helper(n, pre, preLN, i);
        newNode->right = helper(n, pre, preLN, i);
    }
    else
        i++;
    return newNode;
}
struct Node *constructTree(int n, int pre[], char preLN[])
{
    // Code here
    int i = 0;
    return helper(n, pre, preLN, i);
}