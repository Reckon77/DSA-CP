//Greedy
//https://codeforces.com/contest/1509/problem/B
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
		int n;
		cin >> n;
		string s;
		cin >> s;
		string s2 = "TMT";
		unordered_map<char, int>m1;
		bool flag = true;
		REP(i, 0, n) {
			m1[s[i]]++;
		}
		if (m1.size() != 2 || m1['T'] != 2 * m1['M']  ) {
			flag = false;
			cout << "NO" << endl;
			continue;
		}
		vi vm, vt;
		int k = m1['M'];
		REP(i, 0, n) {
			if (s[i] == 'M')
				vm.pb(i);
			else if (s[i] == 'T')
				vt.pb(i);
		}
		REP(i, 0, k) {
			if (vt[i] > vm[i])
				flag = false;
			if (vm[i] > vt[i + k])
				flag = false;
		}
		if (flag) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
 
	}
 
}
