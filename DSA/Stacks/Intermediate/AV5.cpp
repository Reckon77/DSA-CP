//https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1
//https://www.geeksforgeeks.org/the-stock-span-problem/
vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int, int>>st;
	   vector<int> ans;
       for (int i = 0; i < n; i++) {
		while (!st.empty() && st.top().first <= price[i]) {
			st.pop();
		}
		if (st.empty()) {
			ans.push_back(i+1);
		} else {
			ans.push_back(i - st.top().second);
		}
		st.push(make_pair(price[i], i));
	}
	return ans;
    }
