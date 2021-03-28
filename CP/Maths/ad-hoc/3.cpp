//https://codeforces.com/contest/1343/problem/A
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
ll power(int x, unsigned int y)
{
	ll res = 1;
	while (y > 0)
	{
		if (y & 1)
			res = res * x;
		y = y >> 1;
		x = x * x;
	}
	return res;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n = 0;
		cin >> n;
		int i, x;
		for (i = 2; i < 30; i++) {
			if (n % (power(2, i) - 1) == 0) {
				x = n / (power(2, i) - 1);
				break;
			}
		}
		cout << x << endl;
	}

}
