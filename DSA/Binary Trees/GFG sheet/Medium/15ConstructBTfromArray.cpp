// https://practice.geeksforgeeks.org/problems/construct-binary-tree-from-parent-array/1/
Node *createTree(int parent[], int N)
{
    // Your code here
    unordered_map<int, Node *> m1;
    Node *root;

    for (int i = 0; i < N; i++)
    {
        Node *temp = new Node(i);
        m1[i] = temp;
    }
    for (int i = 0; i < N; i++)
    {
        if (parent[i] == -1)
        {
            root = m1[i];
        }
        else if (m1[parent[i]]->left == NULL)
        {
            m1[parent[i]]->left = m1[i];
        }
        else
        {
            m1[parent[i]]->right = m1[i];
        }
    }
    return root;
}