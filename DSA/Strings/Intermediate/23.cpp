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
void rotate(string &s) {
	char a = s[0];
	for (int i = 1; i < s.length(); i++) {
		s[i - 1] = s[i];
	}
	s[s.length() - 1] = a;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	string s2 = s;
	int ans = 0;
	for (int i = 0; i < s.length(); i++) {
		rotate(s2);
		ans++;
		if (s == s2) {
			break;
		}
	}

	cout << ans;

}
