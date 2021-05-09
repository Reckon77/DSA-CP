//https://codeforces.com/contest/1520/problem/C
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
		if (n == 2) {
			cout << -1 << endl;
		} else {
			int mat[n][n] = {0};
			int x = 1;
			for (int i = 0; i < n; i++) {
				int j;
				if (i % 2 == 0) {
					j = 0;
				} else {
					j = 1;
				}
				for (; j < n; j += 2) {
					mat[i][j] = x;
					x++;
				}
			}
			for (int i = 0; i < n; i++) {
				int j;
				if (i % 2 == 0) {
					j = 1;
				} else {
					j = 0;
				}
				for (; j < n; j += 2) {
					mat[i][j] = x;
					x++;
				}
			}
 
			REP(i, 0, n) {
				REP(j, 0, n) {
					cout << mat[i][j] << " ";
				}
				cout << endl;
			}
 
 
 
		}
	}
 
 
}
