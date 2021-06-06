//https://www.geeksforgeeks.org/print-increasing-sequences-length-k-first-n-natural-numbers/
//Print	all	increasing	sequences	of	length	k	from	first	n	natural	numbers
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
void powerset(vector<vector<int>>&ans, list<int>ip, vector<int>op, int k) {
	if (ip.size() == 0) {
		if (op.size() == k) {
			ans.push_back(op);
		}
		return;
	}
	int x = ip.front();
	ip.pop_front();
	powerset(ans, ip, op, k);
	op.push_back(x);
	powerset(ans, ip, op, k);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	list<int>li;
	vector<int> op;
	vector<vector<int>>ans;
	cin >> k >> n;
	for (int i = 1; i <= n; i++) {
		li.push_back(i);
	}
	powerset(ans, li, op, k);
	REP(i, 0, ans.size()) {
		REP(j, 0, ans[i].size()) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}


}
