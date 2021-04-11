//https://codeforces.com/contest/1512/problem/B
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
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		char arr[n][n];
		int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
		bool flag = true;
		REP(i, 0, n) {
			REP(j, 0, n) {
				cin >> arr[i][j];
				if (flag && arr[i][j] == '*') {
					r1 = i;
					c1 = j;
					flag = false;
				} else if (!flag && arr[i][j] == '*') {
					r2 = i;
					c2 = j;
				}
			}
		}
		if (r1 == r2) {
			if (r1 == 0) {
				arr[r1 + 1][c1] = '*';
				arr[r2 + 1][c2] = '*';
			} else {
				arr[r1 - 1][c1] = '*';
				arr[r2 - 1][c2] = '*';
			}
		} else if (c1 == c2) {
			if (c1 == 0) {
				arr[r1][c1 + 1] = '*';
				arr[r2][c2 + 1] = '*';
			} else {
				arr[r1][c1 - 1] = '*';
				arr[r2][c2 - 1] = '*';
			}
		} else {
			arr[r1][c2] = '*';
			arr[r2][c1] = '*';
		}
		// cout << r1 << " " << c1 << " " << r2 << " " << c2 << endl;
		REP(i, 0, n) {
			REP(j, 0, n) {
				cout << arr[i][j];
			}
			cout << endl;
		}
 
	}
}
