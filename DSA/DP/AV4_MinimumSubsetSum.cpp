//https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1
int minDifference(int arr[], int n)
{
    // Your code goes here
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    bool t[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
                t[i][j] = false;
            if (j == 0)
                t[i][j] = true;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] > j)
            {
                t[i][j] = t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            }
        }
    }
    vector<int> v;
    for (int i = 0; i < sum + 1; i++)
    {
        if (t[n][i])
        {
            v.push_back(i);
        }
    }
    if (sum % 2 == 0 && binary_search(v.begin(), v.end(), sum / 2))
    {
        return 0;
    }

    int mn = INT_MAX;
    for (int i = 0; i < v.size() / 2; i++)
    {
        mn = min(mn, sum - 2 * v[i]);
    }
    return mn;
}