//https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1#
long long m = 1000000007;
long long t[100001];
bool flag = true;
long long countWays(int n)
{

    // your code here
    if (flag)
    {
        flag = false;
        memset(t, -1, sizeof(t));
    }
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 4;
    if (t[n] != -1)
    {
        return t[n];
    }
    return t[n] = (countWays(n - 1) + countWays(n - 2) + countWays(n - 3)) % m;
}