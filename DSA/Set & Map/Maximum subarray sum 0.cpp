//https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1/
//https://www.youtube.com/watch?v=xmguZ6GbatA
int maxLen(vector<int> &A, int n)
{
    // Your code here
    unordered_map<int, int> m1;
    int s = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        s += A[i];
        if (s == 0)
        {
            mx = max(mx, i + 1);
        }
        else if (m1.find(s) != m1.end())
        {
            mx = max(mx, i - m1[s]);
        }
        else
        {
            m1[s] = i;
        }
    }
    return mx;
}