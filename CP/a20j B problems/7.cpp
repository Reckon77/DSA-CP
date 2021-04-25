//Wrong at test case 16 :(
//https://codeforces.com/problemset/problem/454/B
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
bool issorted(int arr[], int n) {
	REP(i, 0, n - 1) {
		if (arr[i] > arr[i + 1])
			return false;
	}
	return true;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	inputarr(arr, n);
	if (issorted(arr, n)) {
		cout << 0;
	} else {
		int maxe = INT_MIN, ind = 0;
		REP(i, 0, n) {
			if (arr[i] > maxe) {
				maxe = arr[i];
				ind = i;
			}
		}
		bool flag = true;
		for (int i = 0; i < n - 1; i++) {
			if (i != ind && arr[i] > arr[i + 1])
				flag = false;
		}
		if (arr[0] < arr[n - 1])
			flag = false;
		if (flag) {
			cout << n - 1 - ind;
		} else {
			cout << -1;
		}
	}
 
 
 
 
}
