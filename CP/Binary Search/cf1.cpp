//https://codeforces.com/problemset/problem/474/B
//B.S and prefix sum
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
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	inputarr(arr, n);
	for (int i = 1; i < n; i++) {
		arr[i] = arr[i] + arr[i - 1];
	}
	int m;
	cin >> m;
	while (m--) {
		int x;
		cin >> x;
		int ans = lower_bound(arr, arr + n, x) - arr;
		cout << ans + 1 << endl;
	}

}

