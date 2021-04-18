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
	int n, k;
	cin >> n >> k;
	int arr[n];
	inputarr(arr, n);
	int i = 0, j = 0, sum = 0, mi = 0, minsum = INT_MAX;
	while (j < n) {
		sum += arr[j];
		if (j - i + 1 < k)
			j++;
		else if (j - i + 1 == k) {
			if (sum < minsum) {
				minsum = sum;
				mi = i;
			}
			sum -= arr[i];
			i++;
			j++;
		}
	}
	cout << mi + 1;
}
