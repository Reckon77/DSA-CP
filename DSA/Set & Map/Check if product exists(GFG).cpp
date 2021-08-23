//https://www.geeksforgeeks.org/check-if-the-array-has-an-element-which-is-equal-to-product-of-remaining-elements/
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
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	inputarr(arr, n);
	int p = 1;
	for (int i = 0; i < n; i++) {
		p *= arr[i];
	}
	for (int  i = 0; i < n; i++) {
		if (p / arr[i] == arr[i]) {
			cout << arr[i] << endl;
		}
	}

}
