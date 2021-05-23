//https://codeforces.com/contest/1527/problem/B1
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
		int z = 0;
		for (auto a : s) {
			if (a == '0') {
				z++;
			}
		}
		if (z > 1 && n % 2 != 0 && s[n / 2] == '0') {
			cout << "ALICE";
		} else {
			cout << "BOB";
		}
		cout << endl;
	}
}
