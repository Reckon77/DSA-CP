//https://leetcode.com/problems/find-k-closest-elements/
//https://www.youtube.com/watch?v=J8yLD-x7fBI&list=PL_z_8CaSLPWdtY9W22VjnPxG30CXNZpI9&index=5
vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    priority_queue<pair<int, int>> mh;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        mh.push(make_pair(abs(arr[i] - x), arr[i]));
        if (mh.size() > k)
        {
            mh.pop();
        }
    }
    while (!mh.empty())
    {
        ans.push_back(mh.top().second);
        mh.pop();
    }
    sort(ans.begin(), ans.end());
    return ans;
}