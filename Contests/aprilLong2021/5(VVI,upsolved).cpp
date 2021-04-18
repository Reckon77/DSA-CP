//https://www.codechef.com/problems/KAVGMAT
//Prereq- 2d array prefix sum and binary search
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
vector<vector<int>>a;
int getSum(int r1, int c1, int d) {
	if (d == 0) {
		return 0;
	}
	int r2 = r1 + d - 1, c2 = c1 + d - 1;
	return a[r2][c2] - a[r1 - 1][c2] - a[r2][c1 - 1] + a[r1 - 1][c1 - 1];
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		//Take inputs
		int n, m;
		int k;
		cin >> n >> m >> k;
		a.clear();
		a.resize(n + 1, vector<int>(m + 1));
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> a[i][j];
			}
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				a[i][j] = a[i][j] + a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
			}
		}
		// for (int i = 1; i <= n; i++) {
		// 	for (int j = 1; j <= m; j++) {
		// 		cout << a[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				int maxp = min(n - i + 1, m - j + 1);
				int l = 0, h = maxp, mid;
				while (l < h) {
					mid = (l + h + 1) / 2;
					if (k > (getSum(i, j, mid) / (mid * mid))) {
						l = mid;
					} else {
						h = mid - 1;
					}
				}
				ans += maxp - l;
			}
		}
		cout << ans << endl;

	}
}
