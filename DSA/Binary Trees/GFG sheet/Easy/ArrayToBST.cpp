// https://practice.geeksforgeeks.org/problems/array-to-bst4443/1/
void generate(int s, int e, vector<int> nums, vector<int> &ans)
{
    if (s > e)
    {
        return;
    }
    int m = (s + e) / 2;
    ans.push_back(nums[m]);
    generate(s, m - 1, nums, ans);
    generate(m + 1, e, nums, ans);
}
vector<int> sortedArrayToBST(vector<int> &nums)
{
    // Code here
    vector<int> ans;
    generate(0, nums.size() - 1, nums, ans);
    return ans;
}