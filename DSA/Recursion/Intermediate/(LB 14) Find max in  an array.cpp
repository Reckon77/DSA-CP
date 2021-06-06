//Find Max using recursion
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
void inputarr(int arr[], int n) {REP(i, 0, n) {cin >> arr[i];}}
int findmax(int arr[], int n, int max) {
	if (n == 0) {
		return max;
	}
	if (arr[n - 1] >= max) {
		max = arr[n - 1];
	}
	return findmax(arr, n - 1, max);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	inputarr(arr, n);
	cout << findmax(arr, n, INT_MIN);

}
