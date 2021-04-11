//Equilibrium index of an array
//https://www.geeksforgeeks.org/equilibrium-index-of-an-array/
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
//ALgo 1
int elbmindex(int arr[], int n) {
	int totalsum = 0, ls = 0, rs = 0;
	REP(i, 0, n) {
		totalsum += arr[i];
	}
	REP(i, 0, n) {
		rs = totalsum - arr[i] - ls;
		if (ls == rs)
			return i;
		ls += arr[i];
	}
	return -1;
}
//Algo 2 (both the algo have same time complexity O(n)
//But Algo 2 is using extra space
int emind(int arr[], int n) {
	int fps[n], rps[n];
	for (int i = 0; i < n; i++) {
		fps[i] = arr[i];
		rps[i] = arr[i];
	}
	for (int i = 1; i < n; i++) {
		fps[i] = fps[i] + fps[i - 1];
	}
	for (int i = n - 2; i >= 0; i--) {
		rps[i] = rps[i] + rps[i + 1];
	}
	REP(i, 0, n) {
		if (fps[i] == rps[i])
			return i;
	}
	return -1;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	inputarr(arr, n);
	cout << emind(arr, n) << endl;

}
