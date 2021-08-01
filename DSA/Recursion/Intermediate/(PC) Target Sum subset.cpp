//https://www.pepcoding.com/resources/online-java-foundation/recursion-backtracking/target-sum-subsets-official/ojquestion
#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define endl "\n"
#define mod 1000000007
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<int, int> umap;
void inputarr(int arr[], int n) {REP(i, 0, n) {cin >> arr[i];}}

void targetsum(vector<int>arr, int target, vector<vector<int>>&ans, vector<int>asf, int sum) {
	if (sum == target) {
		ans.push_back(asf);
		return;
	}
	if (sum > target) {
		return;
	}
	if (arr.size() == 0) {
		return;
	}
	int x = arr[arr.size() - 1];
	arr.pop_back();
	targetsum(arr, target, ans, asf, sum);
	asf.push_back(x);
	targetsum(arr, target, ans, asf, sum + x);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int>arr, asf;
	REP(i, 0, n) {
		int x;
		cin >> x;
		arr.pb(x);
	}
	vector<vector<int>>ans;
	targetsum(arr, 60, ans, asf, 0);
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}

}
