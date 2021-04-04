//https://codeforces.com/contest/492/problem/B
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
	int n, l;
	cin >> n >> l;
	int arr[n];
	inputarr(arr, n);
	sort(arr, arr + n);
	int maxd = INT_MIN;
	for (int i = 0; i < n - 1; i++) {
		maxd = max(maxd, abs(arr[i] - arr[i + 1]));
	}
	int lb = (arr[0] - 0);
	int ub = (l - arr[n - 1]);
	float res = fmaxf((float)maxd / 2, max(lb, ub));
	cout << fixed<<setprecision(2)<<res;

}
