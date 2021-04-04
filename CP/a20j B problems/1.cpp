//https://codeforces.com/problemset/problem/266/B
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
typedef unordered_map<int, int> um;
void inputarr(int arr[], int n) {
	REP(i, 0, n) {
		cin >> arr[i];
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int t;
	cin >> n >> t;
	string s;
	cin >> s;
	while (t--) {
		for (int i = 0; i < n - 1; i++) {
			if (s[i] == 'B' && s[i + 1] == 'G') {
				swap(s[i], s[i + 1]);
				i++;
			}
		}
	}
	cout << s;
}
