//https://practice.geeksforgeeks.org/problems/max-rectangle/1
//https://www.geeksforgeeks.org/maximum-size-rectangle-binary-sub-matrix-1s/
int mah(int arr[], int n)
{
	// Your code here
	stack<pair<int, int>>st;
	vector<int> nsr, nsl, width;
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
	int ans = INT_MIN;
	for (int i = 0; i < n; i++) {
		width.push_back((nsr[i] - nsl[i] - 1)*arr[i]);
		ans = max(ans, width[i]);
	}
	return ans;
}
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int v[m];
        for(int j=0;j<m;j++){
            v[j]=M[0][j];
        }
        int ans=mah(v,m);
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]==0){
                    v[j]=0;
                }else{
                    v[j]=v[j]+1;
                }
            }
            ans=max(ans,mah(v,m));
        }
        return ans;
    }
