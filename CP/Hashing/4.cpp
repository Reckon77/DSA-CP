//A great problem

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
	int n, m;
	cin >> n >> m;
	int B[n][m];
	REP(i, 0, n) {
		REP(j, 0, m) {
			cin >> B[i][j];
		}
	}
	int A[n][m];
	REP(i, 0, n) {
		REP(j, 0, m) {
			A[i][j] = 1;
		}
	}
	REP(i, 0, n) {
		REP(j, 0, m) {
			if (B[i][j] == 0) {
				for (int k = 0; k < m; k++) {
					A[i][k] = 0;
				}
				for (int k = 0; k < n; k++) {
					A[k][j] = 0;
				}
			}
		}
	}
	umap row, col;
	REP(i, 0, n) {
		REP(j, 0, m) {
			if (A[i][j] == 0) {
				row[i]++;
				col[j]++;
			}
		}
	}
	// for (auto& a : row) {
	// 	cout << a.f << " " << a.s << endl;
	// }
	// cout << endl;
	// for (auto& a : col) {
	// 	cout << a.f << " " << a.s << endl;
	// }
	// cout << endl;
	bool flag = true;
	REP(i, 0, n) {
		REP(j, 0, m) {
			if (B[i][j] == 1) {
				if (row[i] == m && col[j] == n) {
					flag = false;
				}
			}
		}
	}
	if (flag) {
		cout << "YES" << endl;
		REP(i, 0, n) {
			REP(j, 0, m) {
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
	} else {
		cout << "NO" << endl;
	}



}
