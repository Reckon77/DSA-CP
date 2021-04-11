//https://www.codechef.com/APRIL21C/problems/KAVGMAT
//2D array prefix sum //gives TLE
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
int countSquares(int m, int n)
{
	if (n < m)
		swap(m, n);
	return m * (m + 1) * (2 * m + 1) /
	       6 + (n - m) * m * (m + 1) / 2;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n, m;
		int k;
		cin >> n >> m >> k;
		bool flag = true;
		int arr[n][m];
		REP(i, 0, n) {
			REP(j, 0, m) {
				cin >> arr[i][j];
				if (k >= arr[i][j]) {
					flag = false;
				}
			}
		}
		if (flag) {
			cout << countSquares(n, m) << endl;
		} else {
			int pf[n][m];
			pf[0][0] = arr[0][0];
			for (int i = 1; i < m; i++) {
				pf[0][i] = arr[0][i] + pf[0][i - 1];
			}
			for (int i = 1; i < m; i++) {
				pf[i][0] = arr[i][0] + pf[i - 1][0];
			}
			REP(i, 1, n) {
				REP(j, 1, m) {
					pf[i][j] = arr[i][j] + pf[i][j - 1] + pf[i - 1][j] - pf[i - 1][j - 1];
				}
			}
			// REP(i, 0, n) {
			// 	REP(j, 0, m) {
			// 		cout << pf[i][j] << " ";
			// 	}
			// 	cout << endl;
			// }
			// cout << endl;
			int ans = 0;
			REP(i, 0, n) {
				REP(j, 0, m) {
					if (i == 0 && j == 0) {
						if (pf[i][j] >= k)
							ans++;
					} else if (i == 0) {
						if (pf[i][j] - pf[i][j - 1] >= k)
							ans++;
					} else if (j == 0) {
						if (pf[i][j] - pf[i - 1][j] >= k)
							ans++;
					} else {
						int r1 = i, c1 = j, length = 1, ctr = 1;
						//i=r2,j=c2
						while (r1 >= 0 && c1 >= 0) {
							ll res;
							if (r1 == 0 && c1 == 0) {
								res = pf[i][j];
							} else if (r1 == 0) {
								res = pf[i][j] - pf[i][c1 - 1];
							} else if (c1 == 0) {
								res = pf[i][j] - pf[r1 - 1][j];
							} else {
								res = pf[i][j] - pf[r1 - 1][j] - pf[i][c1 - 1] + pf[r1 - 1][c1 - 1];
							}
							if (res / length >= k) {
								ans++;
							}
							// if (pf[i][j] == 33) {
							// 	cout << res << " " << length << " " << r1 << " " << c1 << " " << endl;
							// }
							length = (ctr + 1) * (ctr + 1);
							ctr++;
							r1--;
							c1--;

						}
					}
				}
			}
			cout << ans << endl;
		}

	}
}
