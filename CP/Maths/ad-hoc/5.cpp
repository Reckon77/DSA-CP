#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
#define f first
#define s second
#define pb push_back
//https://codeforces.com/contest/732/problem/A
#define mp make_pair
#define endl "\n"
#define mod 1000000007
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k, r;
	cin >> k >> r;
	int z = k;
	int ans = 0;
	REP(i, 1, 10) {
		k = z * i;
		if (k % 10 == 0) {
			ans = i;
			break;
		} if (k % 10 == r) {
			ans = i;
			break;
		}
	}
	cout << ans;

}
