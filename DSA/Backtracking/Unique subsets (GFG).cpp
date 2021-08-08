  //https://practice.geeksforgeeks.org/problems/subsets-1587115621/1/
  void generate(set<vector<int>>&ans, vector<int>arr, vector<int>op, int ind, int n) {
	if (ind == n) {
		sort(op.begin(), op.end());
		ans.insert(op);
		return;
	}
	generate(ans, arr, op, ind + 1, n);
	op.push_back(arr[ind]);
	generate(ans, arr, op, ind + 1, n);
}
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        set<vector<int>>ans;
         vector<vector<int>>ans2;
	    vector<int>op;
    	generate(ans, arr, op, 0, n);
    	for(auto s:ans){
    	    ans2.push_back(s);
    	}
    	return ans2;
    }
