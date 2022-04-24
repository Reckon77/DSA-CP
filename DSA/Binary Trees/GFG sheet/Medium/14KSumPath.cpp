// https://practice.geeksforgeeks.org/problems/k-sum-paths/1/
// https://www.youtube.com/watch?v=_Ng486jJu80
void generate(Node *root, int k, vector<int> v, int &count)
{

    if (!root)
        return;
    v.push_back(root->data);
    generate(root->left, k, v, count);
    generate(root->right, k, v, count);
    for (int i = v.size() - 1; i >= 0; i--)
    {
        k -= v[i];
        if (k == 0)
        {
            count++;
        }
    }
    v.pop_back();
}
int sumK(Node *root, int k)
{
    // code here
    int count = 0;
    vector<int> v;
    generate(root, k, v, count);
    return count;
}