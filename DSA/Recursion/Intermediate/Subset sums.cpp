 //https://practice.geeksforgeeks.org/problems/subset-sums2234/1
 //https://www.youtube.com/watch?v=rYkfBRtMJr8
 void funsubset(vector<int>&ans, vector<int>arr, int sum, int N) {
	if (N == 0) {
		ans.push_back(sum);
		return;
	}
	int sum1 = sum;
	int sum2 = sum + arr[N - 1];
	funsubset(ans, arr, sum1, N - 1);
	funsubset(ans, arr, sum2, N - 1);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
       vector<int>ans;
       funsubset(ans,arr,0,N);
       sort(ans.begin(),ans.end());
       return ans;
        
    }
