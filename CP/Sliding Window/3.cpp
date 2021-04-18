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
		int n, b, a;
		cin >> n >> b >> a;
		long long arr[n];
		REP(i, 0, n) {
			cin >> arr[i];
		}
		ll sum = 0, mx_sum = 0;
		double ans = 0;
		int k = b - a + 1;
		int i = 0, j = 0;
		for (int k = a; k <= b; k++) {
			mx_sum = i = j = sum = 0;
			while (j < n) {
				sum += arr[j];
				if (j - i + 1 < k) {
					j++;
				} else if (j - i + 1 == k) {
					mx_sum = max(sum, mx_sum);
					sum -= arr[i];
					i++;
					j++;
				}
			}
			ans = max(ans, (double)mx_sum / k);
		}

		cout << fixed << setprecision(7) << ans << endl;
	}

}
