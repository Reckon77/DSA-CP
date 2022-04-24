// https://practice.geeksforgeeks.org/problems/inorder-traversal-iterative/1/
vector<int> inOrder(Node *root)
{
    // code here
    vector<int> ans;
    Node *temp = root;
    stack<Node *> st;

    while (true)
    {
        if (temp)
        {
            st.push(temp);
            temp = temp->left;
        }
        else
        {
            if (st.empty())
                break;
            temp = st.top();
            st.pop();
            ans.push_back(temp->data);
            temp = temp->right;
        }
    }
    return ans;
}