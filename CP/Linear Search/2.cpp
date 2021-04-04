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
	ll sum = 0;
	int cnt = 0;
	int maxe = arr[0];
	REP(i, 0, n) {
		if (arr[i] >= 0) {
			sum += arr[i];
			cnt++;
		}
		maxe = max(arr[i], maxe);
	}
	if (sum == 0) {
		cout << maxe << " " << 1;
	} else {
		cout << sum << " " << cnt;
	}


}
