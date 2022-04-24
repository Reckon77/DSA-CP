// https://practice.geeksforgeeks.org/problems/postorder-traversal-iterative/1/
vector<int> postOrder(Node *node)
{
    // code here
    vector<int> v;
    stack<Node *> s1;
    s1.push(node);
    while (!s1.empty())
    {
        Node *temp = s1.top();
        s1.pop();
        v.push_back(temp->data);
        if (temp->left != NULL)
        {
            s1.push(temp->left);
        }
        if (temp->right != NULL)
        {
            s1.push(temp->right);
        }
    }
    reverse(v.begin(), v.end());
    return v;
}