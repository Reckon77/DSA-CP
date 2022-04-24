// https://practice.geeksforgeeks.org/problems/bst-to-max-heap/1/
vector<int> ret;
int ind = 0;
void helper(Node *root)
{
    if (!root)
        return;
    helper(root->left);
    ret.push_back(root->data);
    helper(root->right);
}
void help(Node *root)
{
    if (!root)
        return;
    root->data = ret[ind--];
    help(root->right);
    help(root->left);
}
void convertToMaxHeapUtil(Node *root)
{
    // Your code goes here
    ret.clear();
    helper(root);
    ind = ret.size() - 1;
    help(root);
}