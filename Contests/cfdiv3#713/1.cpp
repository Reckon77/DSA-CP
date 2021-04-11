//https://codeforces.com/contest/1512/problem/A
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
		int n;
		cin >> n;
		int arr[n];
		inputarr(arr, n);
		umap m1;
		REP(i, 0, n) {
			m1[arr[i]]++;
		}
		int ans = arr[0];
		for (auto itr = m1.begin(); itr != m1.end(); itr++) {
			if (itr->s == 1) {
				ans = itr->f;
			}
		}
		REP(i, 0, n) {
			if (arr[i] == ans) {
				cout << i + 1 << endl;
				break;
			}
		}
	}
}
