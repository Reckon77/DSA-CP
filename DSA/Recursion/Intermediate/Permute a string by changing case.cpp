//https://www.geeksforgeeks.org/permute-string-changing-case/
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
void solve(string ip, string op) {
	if (ip.length() == 0) {
		cout << op << endl;
		return;
	}
	string op1 = op;
	string op2 = op;
	op1.push_back(ip[0]);
	op2.push_back(toupper(ip[0]));
	ip.erase(0, 1);
	solve(ip, op1);
	solve(ip, op2);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1 = {"abc"};
	string s2 = {""};
	solve(s1, s2);

}
