//https://codeforces.com/problemset/problem/1368/A
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
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int a, b, n;
		cin >> a >> b >> n;
		int ctr = 0;
		while (a <= n && b <= n) {
			if (a < b) {
				a += b;
			} else {
				b += a;
			}
			ctr++;
		}
		cout << ctr << endl;
	}

}
