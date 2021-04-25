//Minimum difference element in a sorted array
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
int minimele(int arr[], int n, int ele) {
	int l = 0, h = n - 1, mid;
	while (l <= h) {
		mid = (l + h) / 2;
		if (arr[mid] == ele) {
			return ele;
		} else if (arr[mid] > ele) {
			h = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return abs(arr[l] - ele) < abs(arr[h] - ele) ? arr[l] : arr[h];
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	inputarr(arr, n);
	cout << minimele(arr, n, 6 );
}
