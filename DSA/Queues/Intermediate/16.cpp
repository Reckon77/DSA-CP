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
	vi maxm, minm;
	list<int> li;
	int i = 0, j = 0;
	while (j < n) {
		while (li.size() > 0 && li.back() < arr[j]) {
			li.pop_back();
		}
		li.pb(arr[j]);
		if (j - i + 1 < k) {
			j++;
		} else if (j - i + 1 == k) {
			maxm.pb(li.front());
			if (arr[i] == li.front()) {
				li.pop_front();
			}
			i++;
			j++;
		}
	}
	li.clear();
	i = j = 0;
	while (j < n) {
		while (li.size() > 0 && li.back() >= arr[j]) {
			li.pop_back();
		}
		li.pb(arr[j]);
		if (j - i + 1 < k) {
			j++;
		} else if (j - i + 1 == k) {
			minm.pb(li.front());
			if (arr[i] == li.front()) {
				li.pop_front();
			}
			i++;
			j++;
		}
	}
	int ans = 0;
	for (int i = 0; i < maxm.size(); i++) {
		ans += maxm[i] + minm[i];
	}
	// for (auto a : maxm) {
	// 	cout << a << " ";
	// }
	// cout << endl;
	// for (auto a : minm) {
	// 	cout << a << " ";
	// }
	cout << ans;

}
