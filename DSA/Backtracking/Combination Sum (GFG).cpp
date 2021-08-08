   //https://practice.geeksforgeeks.org/problems/combination-sum-1587115620/1/
   //Gives TLE
   void generate(set<vector<int>>&ans, vector<int>arr, vector<int>op, int ind, int sum, int key) {
	if (sum == key) {
		sort(op.begin(), op.end());
		ans.insert(op);
		return;
	}
	if (sum > key || ind >= arr.size()) {
		return;
	}
	generate(ans, arr, op, ind + 1, sum, key);
	int ele = arr[ind];
	for (int i = 1; i <= (key) / ele; i++) {
		vector<int>op1 = op;
		for (int j = 0; j < i; j++) {
			op1.push_back(ele);
		}
		generate(ans, arr, op1, ind + 1, sum + ele * i, key);
	}
}
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<int>op;
       set<vector<int>>ans;
       vector<vector<int>>ans2;
	generate(ans, A, op, 0, 0, B);
    for(auto v:ans){
        ans2.push_back(v);
    }
	return ans2;
    }
