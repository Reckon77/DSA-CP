//https://practice.geeksforgeeks.org/problems/nth-catalan-number0817/1/#
cpp_int t[101];
bool flag = true;
cpp_int findCatalan(int n)
{
    //code here
    if (flag)
    {
        flag = false;
        for (int i = 0; i < 101; i++)
        {
            t[i] = -1;
        }
    }
    if (n <= 1)
    {
        return 1;
    }
    if (t[n] != -1)
    {
        return t[n];
    }
    cpp_int res = 0;
    for (int i = 1; i <= n; i++)
        res += findCatalan(i - 1) * findCatalan(n - i);
    return t[n] = res;
}