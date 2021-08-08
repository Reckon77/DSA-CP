//https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/words-klength-words-1-official/ojquestion
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
	if (op.size() == k) {
		ans.push_back(op);
		return;
	}
	for (int i = 0; i < ip.size(); i++) {
		char ch = ip[i];
		string ip1 = ip.substr(0, i) + ip.substr(i + 1);
		generate(ans, ip1, op + ch, k);
	}

}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1, s2;
	int k;
	cin >> s1 >> k;
	unordered_map<char, int>m1;
	for (int i = 0; i < s1.size(); i++) {
		if (m1.find(s1[i]) == m1.end()) {
			m1[s1[i]]++;
			s2.pb(s1[i]);
		}
	}
	s1.clear();
	vector<string>ans;
	generate(ans, s2, s1, k);
	for (auto s : ans) {
		cout << s << endl;
	}

}
