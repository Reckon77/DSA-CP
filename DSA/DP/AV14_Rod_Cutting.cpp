//https://practice.geeksforgeeks.org/problems/rod-cutting0840/1
int cutRod(int price[], int n)
{
    //code here
    int len[n];
    for (int i = 0; i < n; i++)
    {
        len[i] = i + 1;
    }
    int t[n + 1][n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (len[i - 1] <= j)
            {
                t[i][j] = max(price[i - 1] + t[i][j - len[i - 1]], t[i - 1][j]);
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][n];
}