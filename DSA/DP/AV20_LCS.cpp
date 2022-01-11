//https://leetcode.com/problems/longest-common-subsequence/
//Memoized code
//Dont know why giving wrong ans
int t[1001][1001];
bool flag = true;
int longestCommonSubsequence(string text1, string text2)
{
    if (flag)
    {
        flag = false;
        memset(t, -1, sizeof(t));
    }
    if (text1.size() == 0 || text2.size() == 0)
        return 0;
    if (t[text1.size()][text2.size()] != -1)
    {
        return t[text1.size()][text2.size()];
    }
    if (text1[text1.size() - 1] == text2[text2.size() - 1])
    {
        text1.pop_back();
        text2.pop_back();
        return t[text1.size()][text2.size()] = 1 + longestCommonSubsequence(text1, text2);
    }
    string temptext1 = text1, temptext2 = text2;
    text1.pop_back();
    text2.pop_back();
    return t[text1.size()][text2.size()] = max(longestCommonSubsequence(text1, temptext2), longestCommonSubsequence(temptext1, text2));
}

//Top down (works fine)
int longestCommonSubsequence(string text1, string text2)
{
    int n = text1.size();
    int m = text2.size();
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
            if (text1[i - 1] == text2[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
            {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    return t[n][m];
}