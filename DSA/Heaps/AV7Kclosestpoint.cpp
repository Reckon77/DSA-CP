//https://leetcode.com/problems/k-closest-points-to-origin/
vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
{
    priority_queue<pair<int, pair<int, int>>> mh;
    for (int i = 0; i < points.size(); i++)
    {
        int d = points[i][0] * points[i][0] + points[i][1] * points[i][1];
        mh.push({d, {points[i][0], points[i][1]}});
        if (mh.size() > k)
        {
            mh.pop();
        }
    }
    vector<vector<int>> ans;
    while (!mh.empty())
    {
        vector<int> p;
        p.push_back(mh.top().second.first);
        p.push_back(mh.top().second.second);
        ans.push_back(p);
        mh.pop();
    }
    return ans;
}