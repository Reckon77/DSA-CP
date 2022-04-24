// https://www.youtube.com/watch?v=GYdC4hQSo8A&t=7s
// https://practice.geeksforgeeks.org/problems/preorder-traversal-and-bst4006/1/
int canRepresentBST(int arr[], int N)
{
    // code here
    stack<int> st;
    int root = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        while (!st.empty() && arr[i] > st.top())
        {
            root = st.top();
            st.pop();
        }
        if (arr[i] < root)
        {
            return false;
        }
        st.push(arr[i]);
    }
    return true;
}