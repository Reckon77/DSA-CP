//https://codeforces.com/problemset/problem/750/A
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
	int n, k;
	cin >> n >> k;
	if (k >= 240) {
		cout << 0;
	} else {
		int sum = 0;
		int diff = 240 - k;
		int ttime = 5 * ((n * (n + 1)) / 2);
		if (ttime <= diff)
			cout << n;
		else {
			int i = 1;
			while (sum <= diff) {
				sum += 5 * i;
				i++;
			}
			cout << i - 2;
		}
	}
}
