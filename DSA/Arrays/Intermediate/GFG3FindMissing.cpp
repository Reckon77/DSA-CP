// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/
// Gives integer overflow error though
int *findTwoElement(int *arr, int n)
{
    // code here
    long long sum = 0, rep, miss;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[abs(arr[i]) - 1] >= 0)
        {
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        }
        else
        {
            rep = abs(arr[i]);
            break;
        }
    }
    int *ans = new int[2];
    ans[0] = rep;
    miss = ((n * (n + 1)) / 2) - (sum - rep);
    ans[1] = miss;
    return ans;
}