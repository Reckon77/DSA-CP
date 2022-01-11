// https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1/#
//Memoization
int dp[1001][1001];
int maxm;
int util(int n, int m, string &s1, string &s2)
{
    if (n == 0 or m == 0)
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];
    if (s1[n - 1] == s2[m - 1])
        dp[n][m] = 1 + util(n - 1, m - 1, s1, s2);
    else
        dp[n][m] = 0;
    util(n, m - 1, s1, s2);
    util(n - 1, m, s1, s2);
    maxm = max(maxm, dp[n][m]);
    return dp[n][m];
}
int longestCommonSubstr(string S1, string S2, int n, int m)
{
    // your code here
    memset(dp, -1, sizeof(dp));
    maxm = INT_MIN;
    util(n, m, S1, S2);
    return maxm;
}

//Top down

int t[n + 1][m + 1];
for (int i = 0; i < n + 1; i++)
{
    for (int j = 0; j < m + 1; j++)
    {
        if (i == 0 || j == 0)
            t[i][j] = 0;
    }
}
for (int i = 1; i < n + 1; i++)
{
    for (int j = 1; j < m + 1; j++)
    {
        if (S1[i - 1] == S2[j - 1])
        {
            t[i][j] = 1 + t[i - 1][j - 1];
        }
        else
        {
            t[i][j] = 0;
        }
    }
}
int maxm = INT_MIN;
for (int i = 0; i < n + 1; i++)
{
    for (int j = 0; j < m + 1; j++)
    {
        maxm = max(maxm, t[i][j]);
    }
}
return maxm;
}