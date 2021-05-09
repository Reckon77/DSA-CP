//Nearest smaller to left
//https://practice.geeksforgeeks.org/problems/smallest-number-on-left3403/1/
vector<int> leftSmaller(int n, int a[]){
        // code here
        stack<int>st;
	    vector<int> ans;
        for (int i = 0; i < n; i++) {
		while (!st.empty() && st.top() >= a[i]) {
			st.pop();
		}
		if (st.empty()) {
			ans.push_back(-1);
		} else {
			ans.push_back(st.top());
		}
		st.push(a[i]);
	}
	return ans;
    }
