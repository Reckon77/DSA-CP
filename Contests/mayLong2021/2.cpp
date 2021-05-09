//https://www.codechef.com/MAY21C/problems/LKDNGOLF
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
		ll n, x, k;
		cin >> n >> x >> k;

		if (x % k == 0 || ((n + 1) - x) % k == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
