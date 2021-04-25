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
int minind(int arr[], int n) {
	int l = 0, h = n - 1, mid;
	while (l <= h) {
		mid = (l + h) / 2;
		if (arr[mid] < arr[(mid + n - 1) % n])
			return mid;
		else if (arr[mid] > arr[h])
			l = mid + 1;
		else
			h = mid - 1;

	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	inputarr(arr, n);
	cout << n - minind(arr, n);



}
