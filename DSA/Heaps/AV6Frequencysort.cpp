//https://leetcode.com/problems/sort-array-by-increasing-frequency/
//https://www.youtube.com/watch?v=hLR5aMzYGGk&list=PL_z_8CaSLPWdtY9W22VjnPxG30CXNZpI9&index=7
// Solution 1 - min heap
vector<int> frequencySort(vector<int> &nums)
{
    unordered_map<int, int> m1;
    for (int i = 0; i < nums.size(); i++)
    {
        m1[nums[i]]++;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> mh;
    for (auto &e : m1)
    {
        mh.push({e.second, e.first});
    }
    vector<int> ans;
    while (!mh.empty())
    {
        int n = mh.top().first;
        while (n--)
        {
            ans.push_back(mh.top().second);
        }
        mh.pop();
    }
    return ans;
}

//solution 2 - compare function
static bool cmp(pair<int, int> a, pair<int, int> b)
{
    bool flag;
    if (a.second == b.second)
    {
        flag = a.first > b.first ? true : false;
    }
    else
    {
        flag = a.second < b.second ? true : false;
    }
    return flag;
}
vector<int> frequencySort(vector<int> &nums)
{
    unordered_map<int, int> m1;
    for (int i = 0; i < nums.size(); i++)
    {
        m1[nums[i]]++;
    }
    vector<pair<int, int>> v;
    for (auto &e : m1)
    {
        v.push_back({e.first, e.second});
    }
    sort(v.begin(), v.end(), cmp);
    vector<int> ans;
    for (auto e : v)
    {
        int freq = e.second;
        while (freq--)
        {
            ans.push_back(e.first);
        }
    }
    return ans;
}