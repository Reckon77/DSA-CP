//https://codeforces.com/contest/1520/problem/D
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
void inputarr(int arr[], int n) {
	REP(i, 0, n) {
		cin >> arr[i];
	}
}
void solve() {
	int n; cin >> n; int a[n + 1];
	unordered_map<int, int>m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		m[i - a[i]]++;
	}
	ll ans = 0;
	for (auto i : m)
		ans += i.second * 1LL * (i.second - 1) / 2;
	cout << ans << "\n";
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		solve();
	}
 
 
}
