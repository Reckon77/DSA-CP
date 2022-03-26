// https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1/
vector<int> zigZagTraversal(Node *root)
{
    // Code here
    deque<Node *> q;
    vector<int> ans;
    if (!root)
        return ans;
    q.push_front(root);
    bool flag = true;
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            if (flag)
            {
                Node *temp = q.front();
                q.pop_front();
                ans.push_back(temp->data);
                if (temp->left)
                {
                    q.push_back(temp->left);
                }
                if (temp->right)
                {
                    q.push_back(temp->right);
                }
            }
            else
            {
                Node *temp = q.back();
                q.pop_back();
                ans.push_back(temp->data);
                if (temp->right)
                {
                    q.push_front(temp->right);
                }
                if (temp->left)
                {
                    q.push_front(temp->left);
                }
            }
        }
        flag = !flag;
    }
}