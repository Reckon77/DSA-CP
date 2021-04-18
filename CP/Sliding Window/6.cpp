#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
// #define f first
// #define s second
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
		int n, k;
		cin >> n >> k;
		int arr[n];
		inputarr(arr, n);
		int i = 0, j = 2, x = 1;
		int ans = INT_MIN, ind = 0;
		list<int>li;
		int count = 0;
		while (j < n) {
			if (arr[x] > arr[x - 1] && arr[x] > arr[x + 1]) {
				count++;
				li.pb(x - 1);
			}
			if (j - i + 1 < k) {
				j++;
				x++;
			} else if (j - i + 1 == k) {
				if (count > ans) {
					ans = count;
					ind = i;
				}
				if (li.size() != 0 && i == li.front()) {
					li.pop_front();
					count--;
				}
				i++;
				j++;
				x++;
			}
		}
		cout << ans + 1 << " " << ind + 1 << endl;
	}
}
