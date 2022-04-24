// https://practice.geeksforgeeks.org/problems/extreme-nodes-in-alternate-order/1/
vector<int> ExtremeNodes(Node *root)
{
    // Your code here
    queue<Node *> q;
    q.push(root);
    bool flag = false;
    vector<int> ans;
    if (!root)
        return ans;
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 1; i <= n; i++)
        {
            Node *temp = q.front();
            q.pop();
            if (flag && i == 1)
            {
                ans.push_back(temp->data);
            }
            else if (!flag && i == n)
            {
                ans.push_back(temp->data);
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        flag = !flag;
    }
    return ans;
}