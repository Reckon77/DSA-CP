//https://www.spoj.com/problems/AGGRCOW/
//Aggressive cows
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
bool isValid(int arr[], int n, int mid, int c) {
	int cow = 1, current = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] - current >= mid) {
			cow++;
			current = arr[i];
			if (cow == c)
				return true;
		}
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n, c;
		cin >> n >> c;
		int arr[n];
		inputarr(arr, n);
		sort(arr, arr + n);
		int low = 1, high = arr[n - 1] + 1, ans = 0;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (isValid(arr, n, mid, c)) {
				ans = mid;
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
		cout << ans << endl;
	}
}
