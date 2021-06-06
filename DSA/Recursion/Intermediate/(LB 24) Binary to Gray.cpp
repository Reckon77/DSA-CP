//https://www.geeksforgeeks.org/program-convert-binary-code-equivalent-gray-code-using-recursion/
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
void binarytogray(string &op, string ip) {
	if (ip.size() == 0) {
		return;
	}
	if ((ip[0] == '1' && op[op.size() - 1] == '0') || (ip[0] == '0' && op[op.size() - 1] == '1')) {
		op.pb('1');
		ip.erase(0, 1);
		binarytogray(op, ip);
	} else {
		op.pb('0');
		ip.erase(0, 1);
		binarytogray(op, ip);
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string ip, op;
	cin >> ip;
	op.pb(ip[0]);
	ip.erase(0, 1);
	binarytogray(op, ip);
	cout << op;
}
