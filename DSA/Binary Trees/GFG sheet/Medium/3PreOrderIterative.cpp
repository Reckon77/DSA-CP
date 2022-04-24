// https://practice.geeksforgeeks.org/problems/preorder-traversal-iterative/
vector<int> preOrder(Node *root)
{
    // code here
    vector<int> v;
    stack<Node *> s1;
    s1.push(root);
    while (!s1.empty())
    {
        Node *temp = s1.top();
        s1.pop();
        v.push_back(temp->data);
        if (temp->right != NULL)
        {
            s1.push(temp->right);
        }
        if (temp->left != NULL)
        {
            s1.push(temp->left);
        }
    }
    return v;
}