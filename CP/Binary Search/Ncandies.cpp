//NOT a BS solution
//https://practice.geeksforgeeks.org/problems/distribute-n-candies/1/
vector<long long> distributeCandies(int N, int K)
{
    // code here
    vector<long long> v(K, 0);
    int cnt = 1, ind = 0;
    while (N)
    {
        if (N >= cnt)
        {
            v[ind] += cnt;
            N -= cnt;
        }
        else
        {
            v[ind] += N;
            N = 0;
        }
        cnt++;
        ind++;
        if (ind == K)
        {
            ind = 0;
        }
    }
    return v;
}