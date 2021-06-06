  //https://practice.geeksforgeeks.org/problems/minimum-number-of-steps-to-reach-a-given-number5234/1#
  //My approach gives TLE
  void solve(int &ans, int sum, int steps, int d) {
	if (sum == d) {
		ans = min(ans, steps);
		return;
	} else if (abs(sum) >= d) {
		return;
	}
	steps++;
	int sum1 = sum + steps;
	int sum2 = sum - steps;
	solve(ans, sum1, steps, d);
	solve(ans, sum2, steps, d);
}
    int minSteps(int D){
        // code here
        int ans = INT_MAX;
	solve(ans, 0, 0, D);
	return ans;
    }
