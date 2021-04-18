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
		int n, k;
		cin >> n >> k;
		int arr[n];
		inputarr(arr, n);
		int j, i, sum, mx;
		j = i = sum = mx = 0;
		while (j < n) {
			sum += arr[j];
			if (j - i + 1 < k) {
				j++;
			} else if (j - i + 1 == k) {
				mx = max(sum, mx);
				sum -= arr[i];
				i++;
				j++;
			}
		}
		j = 0;
		while (j < k - 1) {
			sum += arr[j];
			mx = max(sum, mx);
			sum -= arr[i];
			i++;
			j++;

		}
		cout << mx << endl;
	}

}
