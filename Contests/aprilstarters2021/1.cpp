//https://www.codechef.com/START3C/problems/CCISLAND
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
		int x, y, xr, yr, d;
		cin >> x >> y >> xr >> yr >> d;
		if (min(x / xr, y / yr) >= d) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}
}
