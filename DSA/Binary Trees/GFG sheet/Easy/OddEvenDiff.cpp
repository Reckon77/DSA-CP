// https://practice.geeksforgeeks.org/problems/odd-even-level-difference/1/
int getLevelDiff(Node *root)
{
    // Your code here
    bool flag = false;
    queue<Node *> q;
    q.push(root);
    int esum = 0, osum = 0;
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            if (!flag)
            {
                osum += temp->data;
            }
            else
            {
                esum += temp->data;
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
    return osum - esum;
}