//https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/words-kselection-1-official/ojquestion
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
void generate(vector<string>&ans, string ip, string op, int k) {
	if (ip.size() == 0) {
		if (op.size() == k) {
			ans.pb(op);
		}
		return;
	}
	char x = ip[0];
	ip.erase(0, 1);
	generate(ans, ip, op + x, k);
	generate(ans, ip, op, k);

}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1, s2;
	cin >> s1;
	for (int i = 1; i < s1.size(); i++) {
		if (s1[i] != s1[i - 1]) {
			s2.pb(s1[i - 1]);
		}
	}
	if (s1[s1.size() - 1] != s1[s1.size() - 2]) {
		s2.pb(s1[s1.size() - 1]);
	}
	s1.clear();
	vector<string>ans;
	generate(ans, s2, s1, 3);
	for (auto s : ans) {
		cout << s << endl;
	}

}
