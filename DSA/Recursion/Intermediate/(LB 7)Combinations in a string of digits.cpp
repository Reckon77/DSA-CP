//https://www.geeksforgeeks.org/combinations-string-digits/
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

void generate(vector<string>&ans, string ip, string op) {
	if (ip.size() == 0) {
		ans.push_back(op);
		return;
	}
	string op1 = op + ip[0];
	string op2 = op + " " + ip[0];
	ip.erase(0, 1);
	generate(ans, ip, op2);
	generate(ans, ip, op1);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<string>ans;
	string s1;
	cin >> s1;
	string s2(1, s1[0]);
	s1.erase(0, 1);
	generate(ans, s1, s2);
	for (auto &a : ans) {
		cout << a << endl;
	}

}
