//https://codeforces.com/contest/1519/problem/A#
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
		long long r, b, d;
		cin >> r >> b >> d;
		if (d == 0 && r == b) {
			cout << "YES";
		} else if (d == 0 && r != b) {
			cout << "NO";
		} else if (abs(r - b) <= d) {
			cout << "YES";
		} else if (r == 1 || b == 1) {
			if (abs(r - b) <= d) {
				cout << "YES";
			} else {
				cout << "NO";
			}
		}
		else {
			if (abs(r - b) <= d) {
				cout << "YES";
			} else {
				if (r > b)swap(r, b);
				if (r * (d + 1LL) < b) {
					cout << "NO";
				} else {
					cout << "YES";
				}
			}
		}
		cout << endl;
	}
}
