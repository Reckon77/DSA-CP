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
	string s1;
	cin >> s1;
	stack<char>st;
	REP(i, 0, s1.length()) {
		st.push(s1[i]);
	}
	s1.clear();
	while (!st.empty()) {
		// cout << st.top();
		s1.pb(st.top());
		st.pop();
	}
	cout << s1;
}
