//Next greater Element
//https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1
vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>st;
        vector<long long>ans;
        for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && st.top() <= arr[i]) {
			st.pop();
		}
		if (st.empty()) {
			ans.push_back(-1);
		} else {
			ans.push_back(st.top());
		}
		st.push(arr[i]);
	}
	reverse(ans.begin(), ans.end());
	return ans;
    }
