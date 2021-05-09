//https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1
//https://www.geeksforgeeks.org/largest-rectangle-under-histogram/
long long getMaxArea(long long arr[], int n)
    {
        // Your code here
    stack<pair<long long, int>>st;
	vector<long long> nsr, nsl, width;
	for (int i = 0; i < n; i++) {
		while (!st.empty() && st.top().first >= arr[i]) {
			st.pop();
		}
		if (st.empty()) {
			nsl.push_back(-1);
		} else {
			nsl.push_back(st.top().second);
		}
		st.push(make_pair(arr[i], i));
	}
	while (!st.empty()) {
		st.pop();
	}
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && st.top().first >= arr[i]) {
			st.pop();
		}
		if (st.empty()) {
			nsr.push_back(n);
		} else {
			nsr.push_back(st.top().second);
		}
		st.push(make_pair(arr[i], i));
	}
	reverse(nsr.begin(), nsr.end());
	long long ans = INT_MIN;
	for (int i = 0; i < n; i++) {
		width.push_back((nsr[i] - nsl[i] - 1)*arr[i]);
		ans = max(ans, width[i]);
	}
	return ans;
    }
