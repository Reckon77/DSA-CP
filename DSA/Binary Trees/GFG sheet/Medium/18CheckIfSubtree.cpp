// https://practice.geeksforgeeks.org/problems/check-if-subtree/1/
void convert(Node *node, string &s)
{
    if (!node)
    {
        s.append("#");
        return;
    }
    s.append('*' + to_string(node->data) + '*');
    convert(node->left, s);
    convert(node->right, s);
}
bool isSubTree(Node *T, Node *S)
{
    // Your code here
    string s1, s2;
    convert(T, s1);

    convert(S, s2);

    return s1.find(s2) != string::npos;
}