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
	int n;
	cin >> n;
	int arr[n];
	inputarr(arr, n);
	sort(arr,arr+n);
	int q;
	cin >> q;
	while (q--) {
		int m;
		cin >> m;
		int ind = upper_bound(arr, arr + n, m) - arr;
		ind--;
		if (ind >= 0) {
			int sum = 0;
			for (int i = 0; i <= ind; i++) {
				sum += arr[i];
			}
			cout << ind + 1 << " " << sum << endl;
		} else {
			cout << 0 << " " << 0 << endl;
		}
	}



}
