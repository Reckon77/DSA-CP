//https://www.codechef.com/START3C/problems/HIRETEST
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
		int n, m, x, y;
		cin >> n >> m >> x >> y;
		while (n--) {
			string s1;
			cin >> s1;
			unordered_map<char, int>m1;
			for (int i = 0; i < m; i++) {
				m1[s1[i]]++;
			}
			if ((m1['F'] >= x) || ((m1['F'] >= x - 1) && (m1['P'] >= y))) {
				cout << 1;
			} else {
				cout << 0;
			}
		}
		cout << endl;
	}
}
