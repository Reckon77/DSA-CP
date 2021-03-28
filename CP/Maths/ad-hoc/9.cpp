//https://codeforces.com/problemset/problem/1355/A
//NOTE: I used brute force but it gives Tle
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
void inputarr(int arr[], int n) {
	REP(i, 0, n) {
		cin >> arr[i];
	}
}
int mini(ll ak) {
	string str = to_string(ak);
	char minv = str[0];
	REP(i, 0, str.size()) {
		if (str[i] < minv)
			minv = str[i];
	}
	int x = (int)(minv) - 48;
	return x;
}
int maxi(ll ak) {
	string str = to_string(ak);
	char maxv = str[0];
	REP(i, 0, str.size()) {
		if (str[i] > maxv)
			maxv = str[i];
	}
	int x = (int)(maxv) - 48;
	return x;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll tc;
	cin >> tc;
	while (tc--) {
		ll a1, k, ak;
		cin >> a1 >> k;
		ak = a1;
		for (ll i = 1; i < k; i++) {
			ak = ak + mini(ak) * maxi(ak);
		}
		cout << ak << endl;
	}
}
