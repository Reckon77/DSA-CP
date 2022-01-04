//https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1#
int t[1000001];
bool flag = true;
int minOperation(int n)
{
    //code here.
    if (flag)
    {
        flag = false;
        memset(t, -1, sizeof(t));
    }
    if (n == 0)
        return 0;
    if (t[n] != -1)
    {
        return t[n];
    }
    else if (n % 2 != 0)
        return t[n] = minOperation(n - 1) + 1;
    return t[n] = min(minOperation(n - 1), minOperation(n / 2)) + 1;
}