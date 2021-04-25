//https://codeforces.com/problemset/problem/447/B
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
	int arr[26];
	string s1;
	cin >> s1;
	int k;
	cin >> k;
	int maxe = INT_MIN;
	REP(i, 0, 26) {
		cin >> arr[i];
		maxe = max(arr[i], maxe);
	}
	// cout << maxe;
	vector<int>b, c;
	REP(i, 0, k) {
		c.pb(maxe);
	}
	REP(i, 0, s1.length()) {
		b.pb(arr[s1[i] - 97]);
	}
	int i = 0, ind = 0;
	while (b[i] < maxe && i < b.size()) {
		ind = i;
		i++;
	}
	// auto it = find(b.begin(), b.end(), b[ind + 1]);
	auto it = b.end();
	b.insert(it, c.begin(), c.end());
	int ans = 0;
	REP(i, 0, b.size()) {
		ans += b[i] * (i + 1);
	}
	cout << ans;
 
 
}
