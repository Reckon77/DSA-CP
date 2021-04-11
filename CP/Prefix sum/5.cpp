//Gives TLE but can be removed
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
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);
	int n, m, u, q;
	cin >> n >> m >> u >> q;
	int arr[n][m];
	REP(i, 0, n) {
		REP(j, 0, m) {
			cin >> arr[i][j];
		}
	}
	//Modify this loop to remove TLE
	while (u--) {
		int k, r1, c1, r2, c2;
		cin >> k >> r1 >> c1 >> r2 >> c2;
		for (int i = r1; i <= r2; i++) {
			for (int j = c1; j <= c2; j++) {
				arr[i][j] += k;
			}
		}
	}
	//..........................................
	int pf[n][m];
	pf[0][0] = arr[0][0];
	for (int i = 1; i < m; i++)
		pf[0][i] = arr[0][i] + pf[0][i - 1];
	for (int i = 1; i < n; i++)
		pf[i][0] = pf[i - 1][0] + arr[i][0];
	REP(i, 1, n) {
		REP(j, 1, m) {
			pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
		}
	}
	// REP(i, 0, n) {
	// 	REP(j, 0, m) {
	// 		cout << pf[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	while (q--) {
		int r1, c1, r2, c2;
		cin >> r1 >> c1 >> r2 >> c2;
		if (r1 == 0 && c1 == 0) {
			cout << pf[r2][c2] << endl;
		} else if (r1 == 0) {
			cout << pf[r2][c2] - pf[r2][c1 - 1] << endl;
		} else if (c1 == 0) {
			cout << pf[r2][c2] - pf[r1 - 1][c2] << endl;
		}
		else {
			cout << pf[r2][c2] - pf[r1 - 1][c2] - pf[r2][c1 - 1] + pf[r1 - 1][c1 - 1] << endl;

		}
	}


}
