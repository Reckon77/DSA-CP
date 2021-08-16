//https://www.geeksforgeeks.org/k-th-missing-element-in-an-unsorted-array/
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
	int n, k;
	cin >> n >> k;
	int arr[n];
	inputarr(arr, n);
	int maxe = INT_MIN;
	int mine = INT_MAX;
	REP(i, 0, n) {
		maxe = max(maxe, arr[i]);
		mine = min(mine, arr[i]);
	}

	int hash[maxe + 1] = {0};
	for (int i = 0; i < n; i++) {
		hash[arr[i]]++;
	}
	vector<int>v;
	for (int i = mine; i < maxe + 1; i++) {
		if (hash[i] == 0) {
			v.pb(i);
		}
	}
	cout << v[k - 1];

}
