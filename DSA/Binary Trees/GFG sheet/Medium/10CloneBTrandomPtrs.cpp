// https://practice.geeksforgeeks.org/problems/clone-a-binary-tree/1/
Node *cloneTree(Node *tree)
{

    if (!tree)
        return NULL;
    Node *newNode = new Node(tree->data);
    newNode->left = cloneTree(tree->left);
    newNode->right = cloneTree(tree->right);
    newNode->random = tree->random;
    return newNode;
}