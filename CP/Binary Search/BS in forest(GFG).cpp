//https://practice.geeksforgeeks.org/problems/ffd66b6a0bf7cefb9987fa455974b6ea5695709e/1/
//https://www.youtube.com/watch?v=K71L1bY96jY
int check(int tree[], int n, int ele)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (tree[i] > ele)
        {
            sum += tree[i] - ele;
        }
    }
    return sum;
}
int find_height(int tree[], int n, int k)
{
    // code here
    int maxm = tree[0];
    for (int i = 0; i < n; i++)
    {
        maxm = max(maxm, tree[i]);
    }
    int l = 0, h = maxm;
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (check(tree, n, m) == k)
        {
            return m;
        }
        else if (check(tree, n, m) < k)
        {
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return -1;
}