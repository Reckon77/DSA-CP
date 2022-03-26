// https://practice.geeksforgeeks.org/problems/ancestors-in-binary-tree/1/
void generate(vector<int> &ans, Node *root, bool &flag, int target)
{
    if (!root)
        return;
    if (root->data == target)
    {
        flag = true;
        return;
    }

    generate(ans, root->left, flag, target);
    if (flag)
    {
        ans.push_back(root->data);
        return;
    }
    generate(ans, root->right, flag, target);
    if (flag)
    {
        ans.push_back(root->data);
        return;
    }
}
vector<int> Ancestors(struct Node *root, int target)
{
    // Code here
    vector<int> ans;
    bool flag = false;
    generate(ans, root, flag, target);
    return ans;
}