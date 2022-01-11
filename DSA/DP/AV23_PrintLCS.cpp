//https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence/problem
vector<int> longestCommonSubsequence(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    int t[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
            {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    vector<int> ans;
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (a[i - 1] == b[j - 1])
        {
            ans.push_back(a[i - 1]);
            i--;
            j--;
        }
        else
        {
            t[i - 1][j] > t[i][j - 1] ? i-- : j--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}