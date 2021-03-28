//https://codeforces.com/contest/546/problem/A
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
	int k, n, w;
	cin >> k >> n >> w;
	int ap = (((w * (w + 1)) / 2) * k);
	if (ap > n)
		cout << ap - n;
	else
		cout << 0;
	return 0;
}
