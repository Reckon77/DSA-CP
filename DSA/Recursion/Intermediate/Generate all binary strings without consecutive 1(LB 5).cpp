//https://www.geeksforgeeks.org/generate-binary-strings-without-consecutive-1s/
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


void binary(vector<string>&ans, string ip, string op) {
	if (ip.size() == 0) {
		ans.push_back(op);
		return;
	}
	string op1 = op;
	string op2 = op;
	op1.push_back('0');
	op2.push_back('1');
	ip.erase(0, 1);
	if (op.size() == 0 || op[op.size() - 1] == '0') {
		binary(ans, ip, op1);
		binary(ans, ip, op2);
	} else {
		binary(ans, ip, op1);
	}


}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<string>ans;
	string s1(n, '0');
	string s2 = {""};
	binary(ans, s1, s2);
	for (auto &a : ans) {
		cout << a << endl;
	}


}
