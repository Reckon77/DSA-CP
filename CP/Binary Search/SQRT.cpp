//https://practice.geeksforgeeks.org/problems/square-root/1/
long long int floorSqrt(long long int x)
{
    // Your code goes here
    long long int l = 0, h = x, m, ans;

    while (l <= h)
    {
        m = (l + h) / 2;
        if (m * m == x)
        {
            return m;
        }
        else if (m * m < x)
        {
            l = m + 1;
            ans = m;
        }
        else
        {
            h = m - 1;
        }
    }
    return ans;
}