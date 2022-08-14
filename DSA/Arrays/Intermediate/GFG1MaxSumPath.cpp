// https://www.youtube.com/watch?v=9JcQrd5wHhM
// https://practice.geeksforgeeks.org/problems/max-sum-path-in-two-arrays/1/
int max_path_sum(int A[], int B[], int l1, int l2)
{

    // Your code here
    int i = 0, j = 0, sum1 = 0, sum2 = 0, res = 0;
    while (i < l1 && j < l2)
    {
        if (A[i] < B[j])
        {
            sum1 += A[i++];
        }
        else if (A[i] > B[j])
        {
            sum2 += B[j++];
        }
        else
        {
            res += max(sum1, sum2);
            sum1 = 0, sum2 = 0;
            while (i < l1 && j < l2 && A[i] == B[j])
            {
                res += A[i++];
                j++;
            }
        }
    }
    while (i < l1)
    {
        sum1 += A[i++];
    }
    while (j < l2)
    {
        sum2 += B[j++];
    }
    res += max(sum1, sum2);
    return res;
}