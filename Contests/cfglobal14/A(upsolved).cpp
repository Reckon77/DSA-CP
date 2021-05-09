//https://codeforces.com/contest/1515/problem/A
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
bool iseven(int n) {
	return n % 2 == 0 ? 1 : 0;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n, x, sum = 0;
		cin >> n >> x;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		if (sum == x) {
			cout << "NO";
		} else {
			int pf[n];
			pf[0] = arr[0];
			int i, j = 0;
			for (i = 1; i < n; i++) {
				pf[i] = arr[i] + pf[i - 1];
			}
			for (int i = 0; i < n; i++) {
				if (pf[i] == x) {
					swap(arr[i], arr[i + 1]);
				}
			}
			cout << "YES" << endl;
			for (int i = 0; i < n; i++) {
				cout << arr[i] << " ";
			}
		}
		cout << endl;
	}
}
