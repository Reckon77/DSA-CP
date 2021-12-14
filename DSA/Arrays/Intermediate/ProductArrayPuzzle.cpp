//https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1/
vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
{

    //code here
    int cnt = 0;
    long long int p = 1, p2 = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            cnt++;
        }
        if (nums[i] != 0)
        {
            p2 *= nums[i];
        }
        p *= nums[i];
    }

    vector<long long int> ans;
    if (cnt == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                ans.push_back(p2);
            }
            else
            {
                ans.push_back(0);
            }
        }
        return ans;
    }
    else if (cnt > 1)
    {
        for (int i = 0; i < n; i++)
        {
            ans.push_back(0);
        }
        return ans;
    }
    for (int i = 0; i < n; i++)
    {
        ans.push_back(p / nums[i]);
    }
    return ans;
}