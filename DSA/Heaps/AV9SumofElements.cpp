//https://practice.geeksforgeeks.org/problems/sum-of-elements-between-k1th-and-k2th-smallest-elements3133/
long long smallest(long long arr[], long long n, long long k)
{
    priority_queue<long long> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    return pq.top();
}
long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2)
{
    // Your code goes here
    long long sm1 = smallest(A, N, K1);
    long long sm2 = smallest(A, N, K2);
    long long ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > sm1 && A[i] < sm2)
        {
            ans += A[i];
        }
    }
    return ans;
}