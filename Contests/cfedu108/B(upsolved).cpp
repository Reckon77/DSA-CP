//https://codeforces.com/contest/1519/problem/B
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
		int n, m, k;
		cin >> n >> m >> k;
		int arr[n][m];
		arr[0][0] = 0;
		REP(i, 1, m) {
			arr[0][i] = arr[0][i - 1] + 1;
		}
		REP(i, 1, n) {
			arr[i][0] = arr[i - 1][0] + 1;
		}
		REP(i, 1, n) {
			REP(j, 1, m) {
				arr[i][j] = arr[i][j - 1] + i + 1;
			}
		}
		// REP(i, 0, n) {
		// 	REP(j, 0, m) {
		// 		cout << arr[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		if (arr[n - 1][m - 1] == k) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}
}
