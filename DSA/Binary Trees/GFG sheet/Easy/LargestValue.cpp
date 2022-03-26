// https : // practice.geeksforgeeks.org/problems/largest-value-in-each-level/1/
vector<int>
largestValues(Node *root)
{
    // code here
    queue<Node *> q;
    q.push(root);
    vector<int> ans;
    while (!q.empty())
    {
        int n = q.size();
        int maxe = q.front()->data;
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->data > maxe)
            {
                maxe = temp->data;
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
        ans.push_back(maxe);
    }
    return ans;
}