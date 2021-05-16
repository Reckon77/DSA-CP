//https://www.geeksforgeeks.org/merging-intervals/
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
void inputarr(int arr[], int n) {REP(i, 0, n) {cin >> arr[i];}}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pi> inter;
	REP(i, 0, n) {
		int x, y;
		cin >> x >> y;
		inter.pb(mp(x, y));
	}
	sort(inter.begin(), inter.end());
	stack<pi> st;
	st.push(inter[0]);
	for (int i = 1; i < n; i++) {
		if (st.top().s >= inter[i].f) {
			st.top().s = inter[i].s;
		} else {
			st.push(inter[i]);
		}
	}
	while (!st.empty()) {
		cout << st.top().f << " " << st.top().s << endl;
		st.pop();

	}

}
