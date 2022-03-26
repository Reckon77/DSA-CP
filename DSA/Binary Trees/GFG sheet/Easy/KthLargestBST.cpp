// https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1/
void revin(vector<int> &ans, Node *root, int K)
{
    if (!root)
        return;

    revin(ans, root->right, K);
    if (ans.size() >= K)
        return;
    ans.push_back(root->data);
    revin(ans, root->left, K);
}
int kthLargest(Node *root, int K)
{
    // Your code here
    vector<int> ans;
    revin(ans, root, K);
    return ans[ans.size() - 1];
}