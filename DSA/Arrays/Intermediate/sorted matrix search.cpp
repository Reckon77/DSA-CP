//Sorted matrix search
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
	int n, m, k;
	cin >> n >> m >> k;
	int arr[n][m];
	REP(i, 0, n) {
		REP(j, 0, m) {
			cin >> arr[i][j];
		}
	}
	int r = 0, c = m - 1;
	bool flag = false;
	while (r < n && c >= 0) {
		if (arr[r][c] == k) {
			flag = true;
			break;
		} else if (arr[r][c] > k) {
			c--;
		} else {
			r++;
		}
	}
	if (flag) {
		cout << 1;
	} else {
		cout << 0;
	}

}
