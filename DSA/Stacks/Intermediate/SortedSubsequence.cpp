//https://practice.geeksforgeeks.org/problems/sorted-subsequence-of-size-3/1/
vector<int> find3Numbers(vector<int> arr, int N)
{
    // Your code here
    stack<int> st;
    for (int i = N - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        st.push(arr[i]);
        if (st.size() >= 3)
        {
            break;
        }
    }
    vector<int> ans;
    if (st.size() < 3)
    {
        return ans;
    }
    for (int i = 0; i < 3; i++)
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}