//https://www.geeksforgeeks.org/powet-set-lexicographic-order/
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
void powerset(vector<string> &ans, string ip, string op) {
	if (ip.size() == 0) {
		ans.pb(op);
		return;
	}
	string op1, op2;
	op1 = op2 = op;
	op2.pb(ip[0]);
	ip.erase(0, 1);
	powerset(ans, ip, op1);
	powerset(ans, ip, op2);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1, s2 = {""};
	cin >> s1;
	vector<string> ans;
	powerset(ans, s1, s2);
	sort(ans.begin(), ans.end());
	for (auto&a : ans) {
		cout << a << endl;
	}


}
