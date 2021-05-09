//https://codeforces.com/contest/1520/problem/A
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
		string s1;
		cin >> s1;
		unordered_map<char, int> m1;
		REP(i, 0, n) {
			m1[s1[i]]++;
		}
		// for (auto &a : m1) {
		// 	cout << a.f << " " << a.s << endl;
		// }
		// cout << endl;
		bool flag = true;
		REP(i, 0, n) {
			int j = i, cnt = 0;
			while (s1[j] == s1[i]) {
				j++;
				cnt++;
			}
			// cout << cnt << " " << s1[i] << endl;
			if (cnt != m1[s1[i]]) {
				flag = false;
				break;
			}
			// cout << i << " " << j << endl;
			i = j - 1;
 
		}
		if (flag) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}
 
}
