//https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
long long minCost(long long arr[], long long n)
{
    // Your code here
    priority_queue<long long, vector<long long>, greater<long long>> mh;
    for (int i = 0; i < n; i++)
    {
        mh.push(arr[i]);
    }
    long long sum = 0;
    while (mh.size() >= 2)
    {
        long long x = mh.top();
        mh.pop();
        long long y = mh.top();
        mh.pop();
        sum += x + y;
        mh.push(x + y);
    }

    return sum;
}