//https://www.spoj.com/problems/CSUMQ/
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
	REP(i, 1, n) {
		arr[i] = arr[i - 1] + arr[i];
	}
	int q;
	cin >> q;
	while (q--) {
		int i, j;
		cin >> i >> j;
		if (i == 0) {
			cout << arr[j] << endl;
		} else {
			cout << arr[j] - arr[i - 1] << endl;
		}
	}

}
