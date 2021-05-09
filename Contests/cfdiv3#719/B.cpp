//https://codeforces.com/contest/1520/problem/B
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
		if (n < 10) {
			cout << n << endl;
		} else {
			int ans;
			int nod = 0;
			int x = n, d;
			while (x) {
				d = x % 10;
				x = x / 10;
				nod++;
			}
			string s1;
			for (int i = 0; i < nod; i++) {
				s1.pb('1');
			}
			int z = stoi(s1) * d;
			ans = (nod - 1) * 9;
			if (n >= z) {
				ans += d;
			} else {
				ans += (d - 1);
			}
			cout << ans << endl;
		}
 
 
 
 
	}
 
}
